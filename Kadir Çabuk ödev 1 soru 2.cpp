#include<stdio.h>

int main(){
	int num1, num2;
	
	printf("lutfen iki sayi giriniz.\n");
	scanf("%d%d",&num1,&num2);
	
	if(num1>num2){
		printf("%d sayi en buyuktur.\n",num1);
	}
	
	if(num2>num1){
		printf("%d sayi en buyuktur.\n",num2);
	}
	
	if(num2==num1){
		printf("bu sayilar esittir.\n");
	}
	
	return 0;
}
