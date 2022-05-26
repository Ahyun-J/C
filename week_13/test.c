#include <stdio.h>
#include <string.h> //strlen()

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

void print_dic(char* x_dic, int x_dic_cnt){
    for(int i=0; i<x_dic_cnt; i++)
    {
        printf("%c",x_dic[i]);               

        if(i==x_dic_cnt-2)
        {
            printf("\n");
            break;
        }
        else
            printf(",");                   
    }
}

void local_main(){
    char str[1024];

    while (1)
    {
        char dic[1024] = {'\0'}; //NULL
        int dic_cnt = 0;   
        dic_cnt = 0;
        printf("공백 문자가 포함된 문자열을 입력하시오 ? ");
        fgets(str, sizeof(str), stdin);
        //Step1     매번문자열 입력이 번거롭다.
        //sprintf(str,"%s","Hello World 1212");
        //printf("%s %d \n",str,strlen(str));

        //Step2
        for (int i = 0; i < strlen(str); i++)
        {
            if (find_dic(dic, dic_cnt, str[i]) == 0)
                stack_dic(dic, &dic_cnt, str[i]);
        }

        print_dic(dic, dic_cnt);
    }
}

int main() {
    local_main(); //전역변수 x
}