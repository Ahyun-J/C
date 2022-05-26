#include <stdio.h>
// <메모리 입출력 원리>
// 1val (single value) 입출력 원리 이해

void step1()
{
    char cc = 'A';

    printf("%c \n", cc);
    printf("%d \n", cc);
    printf("%x \n", cc);
    printf("%o \n", cc);
}

void step2()
{
    char cc = 'A';
    cc = 'A';   printf("%c \n", cc);
    cc = 65;    printf("%c \n", cc);
    cc = 0x41;    printf("%c \n", cc);  //0x : 16진법
    cc = 0101;    printf("%c \n", cc);  //0 : 8진법
    cc = 0b01000001;    printf("%c \n", cc);  //0b : 2진법
}

void step3()
{
    char cc = 'C';
    cc = 'C';   printf("%c \n", cc);
    cc = 67;    printf("%c \n", cc);
    cc = 0x43;    printf("%c \n", cc);  //0x : 16진법
    cc = 0103;    printf("%c \n", cc);  //0 : 8진법
    cc = 0b01000011;    printf("%c \n", cc);  //0b : 2진법
}

void main()
{
    //step1();
    //step2();  
    step3();
}