#include<stdio.h>

int isPrime(int number);

main(){
	int number_primes=1, number_needed=10001, i=3;

    while(1){

        if(isPrime(i)){
            number_primes++;
            if(number_primes == number_needed){
               break;
            }
        }
            i +=2;
    }

	printf("%d\n",i);
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
