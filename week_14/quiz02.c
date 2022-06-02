#include <stdio.h>
#include <string.h>

void main(){
    char str[1024];
    fgets(str, sizeof(str), stdin); //fgets(위치, 길이(크기), 방법)

    for(int i  = 0; i < strlen(str); i++){ //str 문자의 길이만큼 반복
        if(str[i] == ' ') printf("\n"); // 만약 문자열의 단어가 공백이면 엔터
        else printf("%c", str[i]); // 아니라면 문자 출력
    }
}