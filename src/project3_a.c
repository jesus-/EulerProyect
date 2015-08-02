#include<stdio.h>

main(){
	long  number = 600851475143, aux=2, max =0;

	while(number%2 ==0){
        number/=2;
        max =2;
    }

    while (number!=1){
		aux =3;
		while(number%aux !=0){
			aux+=2;
		}
		if(aux > max){
			max = aux;
		}
		number = number / aux;
	}
	printf("The number is: %lu",max);
}
