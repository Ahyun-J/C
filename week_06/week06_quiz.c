#include <stdio.h>

void main(){
    int a = 36;
    int b = 96;
    int c = 1;

    for (int i = 1; i <= a && i <= b ; i++) //1부터 a와 b보다 박거나 같을 때 까지 반복한다.
    {
        if(a%i == 0 && b%i == 0) //만약 a와 b가 i로 나누었을 때 나머지가 0이라면
        {
            c = i; //c에 i를 저장한다.
        }
    }
    printf("%d",c); //c(최대공약수)를 출력한다.
}

//2
// void main(){
//     for (int i = 1; i <= 20; i++) //1부터 20보다 작거나 까틍 때까지 반복한다.
//     {
//         if(i%2 == 0 && i%3 == 0) // 만약 2로 나누었을 때와 3으로 나누었을 때 나머지가 0이라면
//         {
//             printf("%d ", i); //i를 출력한다.
//         }
//     }
// }

//1
// void main(){
//     int i =1; 
//     int mul =1;
    
//     while (i <= 10) //i가 10보다 작거나 같을 때 반복한다.
//     { 
//         mul = mul * i; //mul과 i를 곱하여 mul에 저장한다.
//         printf("%d\n",mul); //mul을 출력하고 한줄을 띈다.
//         i++; //i를 1 증가시킨다.
//     }
// }

