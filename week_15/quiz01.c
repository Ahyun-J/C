// 1개의 문자열을 입력받고, 공백을 기준으로 문자열을 행단위로 출력하시오

// - for 문 사용
// - strtok() 함수 사용
// - 출력 마지막에 공백행이 발생하지 않도록 주의한다.

#include <stdio.h>
#include <string.h>

void main(){
    char str[1024];
    fgets(str, sizeof(str), stdin); //fgets(위치, 길이(크기), 방법)
    char *ptr = strtok(str," ");
    
    for(int i  = 0; i < strlen(str); i++){ //str 문자의 길이만큼 반복
        if(ptr == NULL) break;
        else printf("%s\n",ptr);
        ptr = strtok(NULL, " ");
    }
}