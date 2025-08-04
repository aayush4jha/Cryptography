# 🔐 Caesar Cipher (Shift by 5)

## 📌 Objective
Focused on implementing a simple Caesar Cipher encryption technique, where each character of a given input string is shifted by 5 positions in the English alphabet.

## 🧾 Input
- A string of characters consisting of lowercase English alphabets (`a` to `z`).

## 🔁 Logic
1. Map each character to its corresponding numerical value:
   - `a → 0`, `b → 1`, ..., `z → 25`.
2. For each character in the input string:
   - Add `5` to the corresponding number.
   - If the result exceeds `25`, wrap around using modulo operation (`% 26`).
3. Convert the resulting numbers back to characters.

## 🎯 Output
- A new encrypted string after applying the Caesar Cipher (shift by 5).

## 🧪 Example
- Input: `abc`
- Mapping: `a → 0`, `b → 1`, `c → 2`
- Add 5: `5`, `6`, `7`
- Mapping back: `f`, `g`, `h`
- Output: `fgh`

## 📤 Output
- Display or return the resulting encrypted string.

---

