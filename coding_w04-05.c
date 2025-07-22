#include <stdio.h>

void counCall(){
   int counter = 0;             // กำหนดจะเป็น 0 ใหม่เสมอ โดยไม่ต้องค่าไว้ เหมือนการใช้ static
   counter++;                   // Increment the counter each time the function is called
   printf("Function called %d\n", counter);     // Print the number of times the function has been called
}

int main(){
   printf("Starting funtion calls...%d\n");     // printf Identifier
   counCall();                  // พิมพ์ครั้งที่1
   printf("After first call\n");       // printf Identifier
   counCall();                  // พิมพ์ครั้งที่2
   return 0;
}

/*การที่ไม่ใช้ Static นำหน้า int การนับครั้งแรกและครั้งที่สอง จะได้ 1 เสมอ เพราะ การนับในแต่ละครั้งจะเริ่ม 0 ใหม่เสมอ*/
