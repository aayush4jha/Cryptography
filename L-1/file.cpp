#include <bits/stdc++.h>
using namespace std;
int main() 
{
    string s, s1 = "";
    unordered_map<char, char> m;
    cin >>s;
    for (char ch = 'a'; ch <= 'z'; ++ch) 
    {
        int i = ch - 'a'; 
        i += 6;           
        if (i > 25)
            i %= 26;      
        char newChar = 'a' + i;
        m[ch] = newChar;
    }
    for (char ch : s)
    {
        if (ch >= 'a' && ch <= 'z')
        {
            s1 += m[ch];
        } 
        else 
        {
            s1 += ch;
        }
    }
    cout << s1 << endl;

    return 0;
}