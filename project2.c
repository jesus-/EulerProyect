#include<stdio.h>
main(){
	int aux1=1, aux2=1, sum =0, aux;
	while(aux1 + aux2 < 4000000){
		aux = aux1 + aux2;
		
		if(aux%2==0) sum += aux;
		if(aux1 < aux2){
			aux1 = aux;
		}else{
			aux2 = aux;
		}
	}
	printf("the result is: %d\n",sum);
}
