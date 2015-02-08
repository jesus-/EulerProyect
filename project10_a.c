#include <stdio.h>
#include <math.h>
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
