#include<stdio.h>

int isPalindrome(int a);

int main(){
	int i, j, aux=0;
	for(i = 9999; i>100; i--){
		for(j=999;j>=i;j--){
			if(isPalindrome(i*j) ){
               aux = i*j;
               break; //this only breaks the inner for!! 
			}
		}
	}
	printf("The number is %d\n",aux);
	return 0;
}
int isPalindrome(int num){
	int temp, reverse =0;
	temp = num;
	while(temp !=0){
		reverse = reverse*10;
		reverse += temp%10;
		temp /=10;
	}
	if(reverse == num)
		return 1;
	else
		return 0;
}
