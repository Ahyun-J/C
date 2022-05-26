#include <stdio.h>
#include <string.h>

typedef struct myarray MYARRAY; //typedef 선언

struct myarray { //구조체틀 생성
    char str[1024];
    int str1_size;
    char temp;
    char str1[1024];
    void (*makeArr_struct)(MYARRAY *); //포인터 함수 선언
};

void makeArr(MYARRAY *x_arr){
    x_arr->str1_size = 0;
    x_arr->str1;

        for(int i=0; i < strlen(x_arr->str); i++){
            x_arr->temp = x_arr->str[i];
            int j;
            for(j = 0; j<x_arr->str1_size; j++){
                if(x_arr->str[j] == x_arr->temp){
                    break;
                }
            }
            if(j == x_arr->str1_size){
                x_arr->str1[x_arr->str1_size] = x_arr->str[i];
                x_arr->str1_size++;
            }
        }

        for (int i = 0; i < x_arr->str1_size; i++)
        {
            if(i == strlen(x_arr->str1)){
                 printf("%c", x_arr->str1[i]);
            }
            else {
                printf("%c, ", x_arr->str1[i]);}
        }
}

void main() {
    MYARRAY myarray1;
    myarray1.makeArr_struct = makeArr;
    
    //코드 정렬 : Ctrl+K+F
    while (1)  //무한 반복 탈출 Ctrl+C
    {
        printf("\n공백 문자가 있는 문자열을 입력하시오 ? ");
        fgets(myarray1.str, sizeof(myarray1.str), stdin);
        myarray1.makeArr_struct(&myarray1);
        //makeArr(myarray1.str);
    }

   // return 0;
}
