// 1개의 문자열을 입력받고, 공백을 기준으로 문자열을 행단위로 출력하시오

// - for 문 사용
// - strtok() 함수 사용 x
// - strncpy() 또는 strcpy() 함수 사용
// - 출력 마지막에 공백행이 발생하지 않도록 주의한다.

#include <stdio.h>
#include <string.h>

void main(){
    char str[1024];
    char copy[1024];
    fgets(str, sizeof(str), stdin); //fgets(위치, 길이(크기), 방법)
    str[strlen(str) - 1] = '\0'; 
    // fgets 함수의 마지막 '\n' 개행부분을 '\0'으로 바꿔 개행을 방지한다.
    strncpy(copy, str, strlen(str));
    
    for(int i  = 0; i < strlen(str); i++){ //str 문자의 길이만큼 반복
        if(str[i] == ' ')  { // 만약 공백이 나오면
            //strncpy(copy, str, i+1); //copy에 str을 i+1길이만큼 복사해 저장한다.
            copy[i] = '\n'; // copy의 i번째 자리의 문자를 개행으로 바꾼다.
            //strncpy(copy+(i+2), str+(i+1), strlen(str)-i+1); 
            //나머지 문자를 복사 저장한다.
            }
    }
    printf("%s", copy);
}
