🔐 Caesar Cipher :
This project implements the Caesar Cipher — one of the simplest and most widely known encryption techniques — in two parts: Encryption and Decryption.

Part I: 🔒 Encryption
Input:
A file of strings known as the Plaintext.

Process:

Parse each character in the string.

Convert them into an equivalent sequence of numbers:

A → 0, B → 1, ..., Z → 25 (assuming all letters are uppercase).

Use the encryption function:

𝑒
𝑘
(
𝑥
)
=
(
𝑥
+
3
)
m
o
d
 
 
26
e 
k
​
 (x)=(x+3)mod26
Convert the numbers back to letters.

Output the result into an Encryption file (Ciphertext).

Part II: 🔓 Decryption
Input:
A file of strings known as the Ciphertext.

Process:

Parse each character in the Ciphertext.

Convert them to numbers using the same mapping.

Use the decryption function:

𝑑
𝑘
(
𝑦
)
=
(
𝑦
−
3
)
m
o
d
 
 
26
d 
k
​
 (y)=(y−3)mod26
Convert back to characters.

Output the result into a Plaintext file.

