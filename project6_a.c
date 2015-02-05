#include<stdio.h>


main(){
	int sum_first = 0, sum_second = 0, number = 100, result = 0;

    sum_first = number*(number+1)/2;
    sum_second = (2*number +1)*(number +1)*number/6;
    result = sum_first*sum_first - sum_second;
    printf("%d\n",result);
}

