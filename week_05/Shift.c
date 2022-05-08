#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//문제
//Shift 에 대해서 이해하고 있는가? (Swap 을 연속으로 사용)
//배열의 크기를 읽을 수 있는가?
//배열의 사용 크기를 작성해주어야 한다.

void main()
{
    int arr[10] = {1,2,3,4,5};
    
    printf("%d  \n",sizeof(arr)); //물리적메모리크기
    printf("%d  \n",sizeof(arr)/sizeof(int)); //저장공간갯수
    int arr_cnt = 5;  //배열의 사용크기를 알려주어야 한다.

    printf("초기값 :");
    
    for(int i=0; i<arr_cnt; i++)
        printf("%d ", arr[i]);
    printf("\n");

    for(int i=0; i<arr_cnt-1; i++)
    {
        int tmp;
        tmp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = tmp;
    }
    
    printf("left shift :");    
    for(int i=0; i<arr_cnt; i++)
        printf("%d ", arr[i]);
    printf("\n");

    //첫번째 right shift
    for(int i=arr_cnt-1; i>0; i--)
    {
        int tmp;
        tmp = arr[i];
        arr[i] = arr[i-1];
        arr[i-1] = tmp;
    }
    
    printf("right shift :");    
    for(int i=0; i<arr_cnt; i++)
        printf("%d ", arr[i]);
    printf("\n");


    //두번째 right shift
    for(int i=arr_cnt-1; i>0; i--)
    {
        int tmp;
        tmp = arr[i];
        arr[i] = arr[i-1];
        arr[i-1] = tmp;
    }
    
    printf("right shift :");    
    for(int i=0; i<arr_cnt; i++)
        printf("%d ", arr[i]);
    printf("\n");

}