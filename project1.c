#include<stdio.h>


main(){
    int sum=0, i=0, limit = 1000;
    
    for(i=0;i<limit;i++){
        if(i%3 == 0 || i%5==0){
            sum+=i;
        }
    }
	printf("%d\n",sum);
}

