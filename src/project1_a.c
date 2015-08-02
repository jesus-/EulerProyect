#include<stdio.h>


main(){
    int sum=0, i=0, limit = 1000;

    while(i<limit){
        sum+=i;
        i+=3;
    }
    i=0;

    while(i<limit){

		if(i%3 !=0){
			sum+=i;
		}
        i+=5;
	}

	printf("%d\n",sum);
}

