#include<stdio.h>

int main(){
	int num,enBuyuk, enKucuk;
	
	for(int i=0;i<10;i++){
		printf("%d.sayiyi giriniz.\n",i+1);
		scanf("%d",&num);
		
		if(i==0){
			enBuyuk=num;
			enKucuk=num;
		}
		
		if(num<enKucuk){
			enKucuk= num;
		}
		
		if(enBuyuk<num){
			enBuyuk=num;
		}
	}
	
	printf("en buyuk sayi: %d\n",enBuyuk);
	printf("en kucuk sayi: %d\n",enKucuk);
	
	return 0;
}
