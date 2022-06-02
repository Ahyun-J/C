#include <stdio.h>
#include <string.h> //strlen()
//공백을 포함하는 문자열을 입력받고, 문자열안에 포함된 문자의 종류를 저장하는 딕셔너리 배열을 만들고, 내용을 출력
typedef struct myarray MYARRAY; //typedef 선언

struct myarray { //구조체틀 생성
    char str[1024];
    char dic[1024];
    int dic_cnt;
    
    int (*find_struct)(char* , int ,char );
    void (*stack_struct)(char* , int* ,char );
    void (*print_struct)(MYARRAY *); //포인터 함수 선언
};

int find_dic(char* x_dic, int x_dic_cnt,char x_ch){
    for(int j=0; j<x_dic_cnt; j++)
    {
        if(x_dic[j] == x_ch)
            return j; //딕셔너리 내 위치 발견
    }
    return 0; //없음   
}

void stack_dic(char* x_dic, int* x_dic_cnt,char x_ch){
    x_dic[*x_dic_cnt] = x_ch;
    (*x_dic_cnt)=(*x_dic_cnt)+1;
}

void print_dic(MYARRAY *x_arr){
    for(int i=0; i<x_arr->dic_cnt; i++)
    {
        printf("%c",x_arr->dic[i]);               

        if(i==x_arr->dic_cnt-2)
        {
            printf("\n");
            break;
        }
        else
            printf(",");                   
    }
}

void local_main(){
    MYARRAY myarray1;
    myarray1.find_struct = find_dic;
    myarray1.stack_struct = stack_dic;
    myarray1.print_struct = print_dic;

    while (1)
    {
        myarray1.dic_cnt = 0;   
        printf("공백 문자가 포함된 문자열을 입력하시오 ? ");
        fgets(myarray1.str, sizeof(myarray1.str), stdin);

        for (int i = 0; i < strlen(myarray1.str); i++)
        {
            if ( myarray1.find_struct(myarray1.dic, myarray1.dic_cnt, myarray1.str[i]) == 0)
                myarray1.stack_struct(myarray1.dic, &myarray1.dic_cnt, myarray1.str[i]);
        }
        myarray1.print_struct(&myarray1);
    }
}

int main() {
    local_main();
}