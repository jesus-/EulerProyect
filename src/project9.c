#include<stdio.h>


main(){
	int limit=1000, result =1000, i,j,k;

	for(i=1;i<limit;i++){
        for(j=i;j<limit;j++){
            for(k=j;k<limit;k++){
	        	if(i*i+j*j==k*k && i+j+k==result){
	                printf("The result is: %d %d %d %d\n",i,j,k,i*j*k);
                    break;

	        	}
            }
        }
	}

}

