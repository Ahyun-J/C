#include <stdio.h>

void main(){
    printf("-- step1 -- \n");
    char arr1[] = "Hello"; //문자열 저장
    printf("%s \n",arr1);   
    printf("%d", sizeof(*(arr1+0)));
    // printf("%d \n",strlen(arr1));
    // printf("%d \n",sizeof(arr1));
    // printf("%d \n",sizeof(arr1+0));
    // printf("%d \n",sizeof(arr1[0]));
    // printf("%d \n",sizeof(*(arr1+0)));
   
}