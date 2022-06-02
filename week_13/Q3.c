#include <stdio.h>

//scanf() 함수를 이용해서 5개의 숫자를 입력받고, 오름차순 정렬하는 프로그램
typedef struct mysort MYSORT; // typedef 선언

struct mysort //구조체틀 생성
{ 
    int arr[10];
    int arr_cnt;
    int temp;

    void (*sort_struct)(MYSORT *); //포인터 함수 선언
};

void mysort(MYSORT *x_mysort)
{
    for (int i = 0; i < x_mysort->arr_cnt; i++)
    {
        for (int j = 0; j < x_mysort->arr_cnt - 1; j++)
        {
            if (x_mysort->arr[j] > x_mysort->arr[j + 1])
            {
                x_mysort->temp = x_mysort->arr[j];
                x_mysort->arr[j] = x_mysort->arr[j + 1];
                x_mysort->arr[j + 1] = x_mysort->temp;
            }
        }
    }
}

void io_main()
{
    MYSORT mysort1;
    mysort1.arr_cnt = 0;

    printf("숫자 5개를 입력해주세요 ? ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &mysort1.arr[i]);
        mysort1.arr_cnt = i + 1;
    }

    printf("입력된 숫자 : ");
    for (int i = 0; i < 5; i++)
        printf("%d ", mysort1.arr[i]);
    printf("\n");

    mysort1.sort_struct = mysort; // 구조체 포인터 함수 대입
    mysort1.sort_struct(&mysort1); 

    printf("정렬된 숫자 : ");
    for (int i = 0; i < 5; i++)
        printf("%d ", mysort1.arr[i]);
    printf("\n");
}

void main()
{
    io_main();
}