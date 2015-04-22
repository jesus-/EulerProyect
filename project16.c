#include<stdio.h>
#include <gmp.h>

int main(){
 
mpz_t integ; 
int i;
int aux =0;

mpz_init(integ);
mpz_set_ui(integ,1);
mpz_mul_2exp(integ,integ,1000);
char * result = mpz_get_str(NULL,10,integ);

for(i=0; i< strlen(result); i++){
 	aux += result[i] - '0';
	//aux += result[i];
}

printf("Final result: %d",aux);

return 0;
}
