#include <stdio.h> // สำหรับใช้ฟังก์ชัน printf()

int main(){ // ประกาศตัวแปรและกำหนดค่าเริ่มต้น 
    char nameInitial = 'T';                           // ใช้ char เพื่อเก็บตัวอักษรตัวของชื่อ เพราะเป็นตัวอักษรตัวเดียว 
    int age = 18;                                      // ใช้ int เพื่อเก็บค่าอายุ เพราะเป็นตัวเลขจำนวนเต็ม และจำนวนเต็ม 
    float weight = 56.5;                               // ใช้ float เพื่อเก็บค่าน้ำหนัก เพราะสามารถเก็บค่าตัวแปรประเภททศนิยมได้ 
    char gender[] = "Male";                            // ใช้ char array เพื่อเก็บเพศ เพราะใช้ตัวแปรเป็นรูปแบบ pointer 

    printf("NameInitial: %c\n", nameInitial);          // %c สำหรับ char
    printf("Age: %d\n", age);                          // %d สำหรับ int
    printf("Weight: %.1f kg\n", weight);               // %.2f สำหรับ float แสดงทศนิยม 2 ตำแหน่งเพื่อให้ครอบคลุม 56.5
    printf("Gender: %s\n", gender);                   // %s สำหรับ string (char array)

    return 0;
 }



 