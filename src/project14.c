#include<stdio.h>

int numberCollatz(int number);

main(){
    int max=0, i, aux;
    for(i=2;i<1000000;i++){
        aux = numberCollatz(i);
        if(aux > max){
             max = aux;
             printf("%d\n",max);
        }
    }
     printf("%d\n",max);    
}


int numberCollatz(int number){
    int counter=0;
    long aux = number;
    while(aux!=1){
        if(aux%2==0){
            aux /=2;
            counter++;
        }else{
            aux = aux*3 +1;
            counter++;
        }
    }
    return counter;
}
