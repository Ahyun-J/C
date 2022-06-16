#include <stdio.h>
#include <string.h>

void makeArr(char *str)
{
    int str1_size = 0;
    char temp;
    char str1[1024];

    for (int i = 0; i < strlen(str); i++)
    {
        temp = str[i];
        int j;
        for (j = 0; j < str1_size; j++)
        {
            if (str1[j] == temp)
            {
                break;
            }
        }
        if (j == str1_size)
        {
            str1[str1_size] = str[i];
            str1_size++;
        }
    }

    for (int i = 0; i < str1_size; i++)
    {
        if (i == str1_size-1)
        {
            printf("%c", str1[i]);
        }
        else
        {
            printf("%c, ", str1[i]);
        }
    }
}

void main()
{
    char str[1024];

    //코드 정렬 : Ctrl+K+F
    while (1) //무한 반복 탈출 Ctrl+C
    {
        printf("\n공백 문자가 있는 문자열을 입력하시오 ? ");
        fgets(str, sizeof(str), stdin);
        str[strlen(str) - 1] = '\0';
        //printf(str);
        makeArr(str);
    }

    // return 0;
}
