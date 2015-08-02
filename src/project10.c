#include<stdio.h>

int isPrime(int number);

main(){
	int j=3, number_needed=2000000;
    long sum_primes=2;
    while(j<number_needed){

        if(isPrime(j)){
            sum_primes += j; 
        }
            j +=2;
    }

	printf("%lu\n",sum_primes);
}
int isPrime(int number){
    int i;
    for(i=2;i<number;i++){
        if(number%i ==0){
            return 0;
        }
    }
    return 1;
}
