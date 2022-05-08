#include <stdio.h>

// void main(){

//     // SWAP
//     int a = 3;
//     int b = 4;

//     int tt = 0; // 도와줄 친구

//     printf("%d %d\n", a,b);

//     tt = a;
//     a = b;
//     b = tt;

//     printf("%d %d\n", a,b);
// }

void main(){

    //배열 이용
    int arr[10] = {3,4};

    int tt = 0;//임시 저장 변수 도와줄 친구

    for(int i =0; i<2;i++){
        printf("%d ", arr[i]);}
    printf("\n");

    tt = arr[0];
    arr[0] = arr[1];
    arr[1] = tt;

    for(int i =0; i<2;i++){
        printf("%d ", arr[i]);}
    printf("\n");
}