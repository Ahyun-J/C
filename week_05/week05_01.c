#include <stdio.h> //printf() scanf()
#include <stdlib.h> //rand()
#include <time.h> //time()

void main()  
{
    srand(time(NULL));
    
    int arrOdd[10];
    int arrOdd_cnt = 0;

    int arrEven[10];
    int arrEven_cnt = 0; //유효한 배열 크기

    int t;
    for(int i=0; i<10; i++){
    
        t = rand()%10; 
        printf("%d ", t);

        if(t%2 == 0) // 짝
        { 
            arrEven[arrEven_cnt] = t;
            arrEven_cnt += 1;
        }
        else{
            arrOdd[arrOdd_cnt] = t;
            arrOdd_cnt += 1;
        }
    }
    
    printf("\n");
    printf("arrOdd : ");
    for(int i=0; i<arrOdd_cnt; i++) {
        printf("%d ", arrOdd[i]);  
    }

    printf("\n");
    printf("arrEven : ");
    for(int i=0; i<arrEven_cnt; i++) {
        printf("%d ", arrEven[i]);  
    }
}

