#include <stdio.h>

void counCall(){
   static int counter = 0;             // ประกาศค่าครั้งแรก และคงค่าไว้
   counter++;                           // Increment the counter each time the function is called
   printf("Function called %d\n", counter);     // Print the number of times the function has been called
}

int main(){
   printf("Starting funtion calls...%d\n");     // printf Identifier
   counCall();                          // พิมพ์ครั้งที่1
   printf("After first call\n");       // printf Identifier
   counCall();                          // พิมพ์ครั้งที่2
   return 0;
}

// การใช้ static การพิมพ์ ครั้งแรกจะได้ 1 และครั้งที่สองจะได้ 2 เพราะการนับจะไม่เริ่มใหม่เสมอ และคงค่าไว้
