/*
4-)
Eleman say�s�n� ve elemanlar�n� kullan�c�dan alarak bir dizi olu�turun.
Bu dizinin en b�y�k ve en b�y�k ikinci elemanlar�n� bulan bir kod par�as� yaz�n.
*/

#include<stdio.h>

int main(){
	int boyut, enBuyuk, enBuyukiki,num;
	
	printf("lutfen dizinin boyutunu giriniz.\n");
	scanf("%d",&boyut);
	
	int dizi[boyut];
	
	for(int i=0;i<boyut;i++){
		printf("%d.boyuttaki sayiyi giriniz\n",i+1);
		scanf("%d",&num);
		dizi[i]=num;
	}
	

	for(int i=0;i<boyut;i++){
		if(dizi[i]>enBuyuk){
			enBuyukiki=enBuyuk;
			enBuyuk=dizi[i];
		}else if(dizi[i]>enBuyukiki){
			enBuyukiki=dizi[i];
		}
	}
	printf("\n\n");
	
	printf("en buyuk sayi: %d\n",enBuyuk);
	printf("en buyuk ikinci sayi: %d",enBuyukiki);
	
	return 0;
}



