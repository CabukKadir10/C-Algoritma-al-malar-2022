#include<stdio.h>

int main(){
	int num1, num2, num3, ortalama, toplam, carpma, EnB, EnK;
	
	printf("lutfen 3 fakli sayi giriniz.\n");
	scanf("%d%d%d",&num1,&num2,&num3);
	
	toplam=num1 + num2 + num3;
	ortalama= toplam / 3;
	carpma= num1*num2*num3;
	
	if(num1>num2 && num1>num3){
		EnB= num1;
	}
	
	if(num2>num1 && num2>num3){
		EnB= num2;
	}
	
	if(num3>num2 && num3>num1){
		EnB= num3;
	}
	
	if(num1<num2 && num1<num3){
		EnK= num1;
	}
	
	if(num2<num1 && num2<num3){
		EnK= num2;
	}
	
	if(num3<num2 && num3<num1){
		EnK= num3;
	} 
	
	printf("toplam: %d\n",toplam);
	printf("ortalama: %d\n",ortalama);
	printf("carpma: %d\n",carpma);
	printf("en buyuk: %d\n",EnB);
	printf("en kucuk: %d\n",EnK);
	
	return 0;
}
