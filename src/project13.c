#include<stdio.h>

int numberCollatz(int number);
main(){
	int max=0, i, collatz_number, aux;
    //numberCollatz(113383);
	for(i=2;i<1000000;i++){
        collatz_number = numberCollatz(i);
        if(collatz_number > max){
            max = collatz_number;
            aux=i;
           // printf("%d\n",i);
        }
	}

	printf("%d\n",aux);
}

int numberCollatz(int number){
    int counter=0;
    long copy = number;
    while(copy!=1){
        if(copy%2==0){
            copy /=2;
            counter++;
        }else{
            copy = copy*3 +1;
            counter++;
        }
    }
    
    printf("%d ----> %d\n",number,counter);
    return counter;
}
