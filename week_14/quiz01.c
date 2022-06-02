#include <stdio.h>
#include <string.h>

void main(){
    char str[1024];
    fgets(str, sizeof(str), stdin); //fgets(위치, 길이(크기), 방법)
    str[strlen(str) - 1] = '\0'; 
    // fgets 함수의 마지막 '\n' 개행부분을 '\0'으로 바꿔 개행을 방지한다.
    // scanf(" %s",str);
    // fflush(stdin);

    printf("\"%s\"\n",str); // 출력
}