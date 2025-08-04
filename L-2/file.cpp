#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string encryptCaesar(const string& plaintext) {
    string result = "";
    for (char c : plaintext) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            result += (c - base + 3) % 26 + base;
        } else {
            result += c;
        }
    }
    return result;
}

string decryptCaesar(const string& ciphertext) {
    string result = "";
    for (char c : ciphertext) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            result += (c - base - 3 + 26) % 26 + base;
        } else {
            result += c;
        }
    }
    return result;
}

int main() {
    string line, plaintext = "", ciphertext;

    ifstream inputFile("plaintext.txt");
    while (getline(inputFile, line)) {
        plaintext += line + '\n';
    }
    inputFile.close();

    ciphertext = encryptCaesar(plaintext);

    ofstream outputFile("ciphertext.txt");
    outputFile << ciphertext;
    outputFile.close();

    string encryptedText = "", decryptedText;
    ifstream cipherInput("ciphertext.txt");
    while (getline(cipherInput, line)) {
        encryptedText += line + '\n';
    }
    cipherInput.close();

    decryptedText = decryptCaesar(encryptedText);

    ofstream decryptedFile("decrypted.txt");
    decryptedFile << decryptedText;
    decryptedFile.close();

    return 0;
}
