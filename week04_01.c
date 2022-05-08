#include <stdio.h> //printf() scanf()
#include <stdlib.h> //rand()
#include <time.h> //time()

void main()  
{
    srand(time(NULL));
    
    int arr0[10]; 

    for(int i=0; i<10; i++){
        arr0[i] = rand()%5 +5; 
    }

    printf("rand arr[5~9] : ");

    for(int i=0; i<10; i++) {
        printf("%d ",arr0[i]);  
    }
    printf("\n");
}

