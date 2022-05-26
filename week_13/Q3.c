#include <stdio.h>
#include <string.h>

typedef struct mysort MYSORT; //typedef 선언

struct mysort { //구조체틀 생성
    int arr[10];
    int arr_cnt;
    int temp;
    int max;

    void (*sort_struct)(MYSORT *); //포인터 함수 선언
};

void mysort(MYSORT *x_mysort)    // 매개변수로 정렬할 배열과 요소의 개수를 받음
{

    for (int i = 0; i < x_mysort->arr_cnt; i++)    // 요소의 개수만큼 반복
    {
        for (int j = 0; j < x_mysort->arr_cnt - 1; j++)   // 요소의 개수 - 1만큼 반복
        {
            if (x_mysort->arr[j] > x_mysort->arr[j + 1])          // 현재 요소의 값과 다음 요소의 값을 비교하여
            {                                 // 큰 값을
                x_mysort->temp = x_mysort->arr[j];
                x_mysort->arr[j] = x_mysort->arr[j + 1];
                x_mysort->arr[j + 1] = x_mysort->temp;            // 다음 요소로 보냄
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

    mysort1.sort_struct = mysort;
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