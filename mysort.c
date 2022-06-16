#include <stdio.h>

void mysort(int *x_arr, int cnt)
{
    int temp;
    for (int i = 0; i < cnt; i++)
    {
        for (int j = 0; j < cnt - 1; j++)
        {
            if (x_arr[j] > x_arr[j + 1])
            {
                temp = x_arr[j];
                x_arr[j] = x_arr[j + 1];
                x_arr[j + 1] = temp;
            }
        }
    }
}

void main()
{
    int arr[10];
    int arr_cnt = 0;

    printf("숫자 5개를 입력해주세요 ? ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
        arr_cnt = i + 1;
    }

    printf("입력된 숫자 : ");
    for (int i = 0; i < 5; i++)
        printf("%d ", arr[i]);
    printf("\n");

    mysort(arr, arr_cnt); 

    printf("정렬된 숫자 : ");
    for (int i = 0; i < 5; i++)
        printf("%d ", arr[i]);
    printf("\n");
}