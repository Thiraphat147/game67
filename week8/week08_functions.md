# Week 8 — Functions Reference

**Function Reference — `ex02_game_utils.c`**

| Function                                  | ทำหน้าที่                                  | Returns           |
| ----------------------------------------- | ------------------------------------------ | ----------------- |
| `int clamp(int value, int min, int max)`  | จำกัดค่า value ให้อยู่ระหว่าง min และ max  | ค่าที่ clamp แล้ว |
| `float lerp(float a, float b, float t)`   | Linear interpolation ระหว่าง a และ b ตาม t | ค่าที่คำนวณได้    |
| `int randomRange(int min, int max)`       | สุ่มตัวเลขระหว่าง min และ max              | ค่าสุ่ม           |
| `float percentOf(int current, int total)` | คำนวณเปอร์เซ็นต์                           | ค่าเปอร์เซ็นต์    |

## คำถาม Reflection — Exercise 2

### 2.1 `clamp` — Pass by Value

**คำถาม:** ทำไม `hp` ใน `main()` ถึงยังเป็น 150 ทั้งที่ `value` ใน `clamp()` ถูกเขียนทับเป็น 100 ไปแล้ว?

\*\*คำตอบ: เพราะ max ถูก clamp ไว้ที่ 100 ถึงแม้ภายใน main hp 150 เมื่อรันจะไม่เกิน 100 ที่ clamp ไว้

### 2.2 `lerp` — Local Scope

**คำถาม:** ทำไม `main()` ถึงมองไม่เห็นตัวแปร `result` ทั้งที่มันถูกประกาศไว้ในไฟล์เดียวกัน?

**คำตอบ: เพราะ result อยู่ใน Function lerp ที่ประกาศนอก main ทำให้ไม่เห็น result แต่รันโดยใช้ Function lerp ทำให้เห็น result**

### 2.3 `randomRange` — Pass by Value

**คำถาม:** ทำไม `diceMin` ใน `main()` ถึงยังเป็น 1 ทั้งที่ `min` ใน `randomRange()` ถูกบวกเพิ่มเป็น 101 ไปแล้ว?

**คำตอบ: เพราะ min ดึงค่า diceMin มาใช้คำนวณครั้งเดียว ถึงแม้จะเปลี่ยน min ก็ไม่สงผลกับ diceMin**

### 2.4 `percentOf` — Pass by Value

**คำถาม:** ทำไม `score` ใน `main()` ถึงไม่เปลี่ยนเป็น 0 ตาม `current` ทั้งที่ `percentOf()` แก้ `current = 0;` ไปแล้ว?

**คำตอบ: เพราะ current ถูกคำนวณใน Function percentOF แต่สิ่งที่ถูกเรียกคือ score ทำให้จะเปลี่ยน current เท่าไหร่ก็ยังคงเป็น 35**
