#include<stdio.h>


main(){
	int number=1, divisor,max_number=21;
//first brute force
	while(1){
        
        for(divisor=2; divisor<max_number;divisor++){
			if(number%divisor !=0){
                break;
            }
		}
        if(divisor==max_number){
            break;
        }
        number++;
	}

	printf("%d\n",number);
}

