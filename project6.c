#include<stdio.h>


main(){
	int i=0,sum_first = 0, sum_second = 0, number = 101, result = 0;
    
    for(i=0; i<number; i++){
        sum_first += i*i; 
        sum_second +=i;
    }
    result = sum_second * sum_second - sum_first;
    printf("%d\n",result);
}

