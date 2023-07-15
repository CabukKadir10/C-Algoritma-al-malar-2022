#include<stdio.h>

int main(){
	float num1, num2, toplam,carpma, bolme, cikarma;
	
	printf("lutfen iki sayi giriniz.\n");
	scanf("%f%f",&num1,&num2);
	
	toplam= num1 + num2;
	carpma= num1*num2;
	
	if(num1<num2){
		cikarma= num2-num1;
		bolme= num2/num1;
	}else{
		cikarma= num1-num2;
		bolme=num1/num2;
	}
	
	printf("toplam sonucu: %.2f\n",toplam);
	printf("carpma sonucu: %.2f\n",carpma);
	printf("bolme sonucu: %.2f\n",bolme);
	printf("cikarma sonucu: %.2f\n",cikarma);
	
	return 0;
}
