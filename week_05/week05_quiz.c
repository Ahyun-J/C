#include <stdio.h>

void main(){
    int i = 0;
    while (i<3) // i가 3보다 작은 동안 코드를 실행한다.
    {
        printf("Hello World\n"); // Hello World를 출력한 뒤 줄을 바꾼다.
        i++; // i를 1 증가시킨다.
    }
    
}

// #include <stdio.h>

// void main(){
//     for(int i = 0; i < 3 ; i++) 
//     //i를 0부터 1씩 증가하며 3보다 작을 때까지 반복한다.
//     {
//         printf("Hello World\n"); // Hello World를 출력한 뒤 줄을 바꾼다.
//     }
// }

// #include <stdio.h>

// void main(){
//     for(int i = 0; i < 10 ; i++)
//     //i를 0부터 1씩 증가하며 10보다 작을 때까지 반복한다.
//     {
//         if(i >= 3) 
//         //만약 i가 3보다 크거나 같다면 반복문을 빠져나간다.
//         {
//             break; //반복문을 빠져나온다.
//         }
//         printf("Hello World\n"); // Hello World를 출력한 뒤 줄을 바꾼다.
//     }
// }