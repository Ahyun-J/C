#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
	float sum1 =0;
	float sum2 =0;
	float avg =0;
	float var =0;
	float std =0;
	int n = 10;
	
	for(int i = 1; i <= n ;i++){
		sum1 = sum1 + i;
	}
	avg = (sum1/10);	

	for(int i = 1; i <= n ;i++){
		sum2 = sum2 + pow(avg - i,2);
		//sum2 += pow(avg - i,2);
	}
	var = sum2/(n-1);
	std = sqrt(var);

	printf("%f\n",sum2);
	printf("sum : %.6f\n",sum1);
	printf("avg : %.6f\n",avg);
	printf("var : %.6f\n",var);
	printf("std : %.6f\n",std);
	
	//avg = sum1/10
	//sum2 = sum2 + (avg - kk)**2
	//var0 = sum2/(length(tmp0)-1)
	//std0 = sqrt(var0)
}