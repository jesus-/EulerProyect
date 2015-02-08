#include <stdio.h>
#include <math.h>

int isPrime(int number);

main(){
	int number_primes=1, number_needed=10001, i=3;

    while(1){

//        printf("prim: %d +",i);
        if(isPrime(i)){
            number_primes++;
            printf("prime %d is the number: %d\n",number_primes,i);
            if(number_primes == number_needed){
               break;
            }
        }
            i +=2;
    }

	printf("%d\n",i);
}

int isPrime(int number){
    int i, max;
    
    if( number == 1){
        return 0;
    }else if(number < 4){
        return 1;
    }else if(number%2==0){
        return 0;
    }else if(number%3 == 0){
        return 0;
    }else{
        max = (int) floor(sqrt(number));
        i =5;
        while (i<=max){
            if (number%i ==0){
             return 0;
            }
            if(number%(i+2)==0){ 
                return 0;
            }
            i+=6;
        }
        return 1;
    }
    
    return 1;
}
