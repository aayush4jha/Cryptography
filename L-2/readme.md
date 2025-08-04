# 🔐 Caesar Cipher

This project implements the **Caesar Cipher** — one of the simplest and most widely known encryption techniques — in two parts: **Encryption** and **Decryption**.

---

## 🔒 Part I: Encryption

**Input:**  
A file of strings known as the **Plaintext**.

**Process:**

1. Parse each character in the string.
2. Convert each character to its corresponding number:
   - A → 0, B → 1, ..., Z → 25  
   *(Assumes all characters are uppercase.)*
3. Apply the encryption function:

ek(x) = (x + 3) mod 26

yaml
Copy
Edit

4. Convert the resulting numbers back to characters.
5. Output the encrypted result into an **Encryption file (Ciphertext)**.

---

## 🔓 Part II: Decryption

**Input:**  
A file of strings known as the **Ciphertext**.

**Process:**

1. Parse each character in the Ciphertext.
2. Convert each character to its corresponding number:
- A → 0, B → 1, ..., Z → 25
3. Apply the decryption function:

dk(y) = (y - 3) mod 26

yaml
Copy
Edit

4. Convert the resulting numbers back to characters.
5. Output the decrypted result into a **Plaintext file**.

---

## 📌 Notes

- Only uppercase English alphabets (A–Z) are considered.
- Non-alphabetic characters can be ignored or handled separately.
- This method uses a fixed shift of 3 positions.