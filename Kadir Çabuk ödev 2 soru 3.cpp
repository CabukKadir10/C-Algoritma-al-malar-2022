#include<stdio.h>

int main(){
	int num, faktoriyel=1;
	
	printf("lutfen negatif olmayan bir sayi giriniz.\n");
	scanf("%d",&num);
	
	if(num<0){
		printf("lütfen pozitif bir sayi giriniz.\n");
	}else{
		for(int i=1;i<=num;i++){
			faktoriyel=faktoriyel*i;
		}
		
		printf("girdiginiz sayinin faktoriyeli: %d",faktoriyel);
	}
	
	return 0;
}
