#include<stdio.h>

int main(){
	int num1, num2, num3;
	
	printf("lütfen 3 sayi giriniz.\n");
	scanf("%d%d%d",&num1,&num2,&num3);
	
	if(num1%2==0){
		printf("%d cifttir\n",num1);
	}else{
		printf("%d tektir\n",num1);
	}
	
	if(num2%2==0){
		printf("%d cifttir\n",num2);
	}else{
		printf("%d tektir\n",num2);
	}
	
	if(num3%2==0){
		printf("%d cifttir\n",num3);
	}else{
		printf("%d tektir\n",num3);
	}
	
	if(num1%num2==0){
		printf("%d sayisi %d sayisinin tam katidir.\n",num1,num2);
	}
	
	if(num1%num3==0){
		printf("%d sayisi %d sayisinin tam katidir.\n",num1,num3);
	}
	
	if(num2%num1==0){
		printf("%d sayisi %d sayisinin tam katidir.\n",num2,num1);
	}
	
	if(num2%num3==0){
		printf("%d sayisi %d sayisinin tam katidir.\n",num2,num3);
	}
	
	if(num3%num1==0){
		printf("%d sayisi %d sayisinin tam katidir.\n",num3,num1);
	}
	
	if(num3%num2==0){
		printf("%d sayisi %d sayisinin tam katidir.\n",num3,num2);
	}
	
	return 0;
}
