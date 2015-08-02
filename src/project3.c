#include<stdio.h>

main(){
	long  number = 600851475143, aux=2, max =0;

	while (number!=1){
		while(number%aux !=0){
			aux++;
		}
		if(aux > max){
			max = aux;
		}
		number = number / aux;
		aux =2;
	}
	printf("The number is: %lu",max);
}
