#include<stdio.h>

int numberDivisors(long number);

main(){
	int sum=0, i,limit =500,divisors;
    long triangle = 1, number = 1;


    while(1){
        number++;
        triangle+=number;
        divisors = numberDivisors(triangle);

        if(divisors%10 ==0 || divisors>limit){
            printf("the divisors are %d,and the number is %lu\n",divisors,triangle);
        }

		if(divisors> limit){
			break;
		}
	}

	printf("%lu\n",number);
}

int numberDivisors(long number){
    int divisors =1;
    long i;

    for(i=2;i<=number;i++){
        if(number%i ==0){
            divisors++;
        }
    }




    return divisors;
}
