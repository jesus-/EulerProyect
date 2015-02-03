#include<stdio.h>
main(){
	int aux1=1,
        aux2=1,
        aux3 =aux1 + aux2,
        sum=0;

	while(aux3 < 4000000){
		sum += c;
		aux1 = aux2 + aux3;
        aux2 = aux3 + aux1;
        aux3 = aux1 + aux2;
	}
	printf("the result is: %d\n",sum);
}
