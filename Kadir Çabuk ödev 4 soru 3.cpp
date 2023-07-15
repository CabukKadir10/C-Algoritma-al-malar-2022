/*
3-)
Bir kaç tam sayý giriþi yapýlan ve tam sayýlarý birer birer,
cift adý verilen bir fonksiyona gönderen bir program yazýnýz.
Bu fonksiyon gelen sayýnýn çift sayý olup olmadýðýna karar vermeli.
Fonksiyon bir tamsayý argümaný almalý ve sayý çift sayý ise 1 deðilse 0 döndürmelidir.
*/
#include<stdio.h>

void cift(int);

int main(){
	int num;
	
	while(1){
		
		printf("lutfen bir sayi giriniz: ");
		scanf("%d",&num);
		if(num==-1){
			break;
		}
		cift(num);
	}
	
	return 0;	
}

void cift(int num){
	
	if(num%2==0){
		printf("1\n");
	}else{
		printf("0\n");
	}
	
}
