/*
3-)
Bir ka� tam say� giri�i yap�lan ve tam say�lar� birer birer,
cift ad� verilen bir fonksiyona g�nderen bir program yaz�n�z.
Bu fonksiyon gelen say�n�n �ift say� olup olmad���na karar vermeli.
Fonksiyon bir tamsay� arg�man� almal� ve say� �ift say� ise 1 de�ilse 0 d�nd�rmelidir.
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
