#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main(){
    char str[1024];
    fgets(str, sizeof(str), stdin); //fgets(위치, 길이(크기), 방법)
    
    char *ptr = strtok(str," "); // strtok(자를 문자열, 구분 기준)
    int sum1 = 0;

    for(int i  = 0; i < sizeof(str); i++){
            if(ptr == NULL) break; // 잘라진 문자열이 없다면 멈춤
            sum1 += atoi(ptr); // 잘린 문자열을 숫자로 변환한 뒤 sum1에 저장
            ptr = strtok(NULL, " "); // 이전에 찾은 구분자 뒤에서 부터 다시 구분자를 찾기
    }
    printf("%d",sum1);
}