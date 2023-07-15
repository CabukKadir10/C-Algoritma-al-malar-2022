/*
4-)
Eleman sayýsýný ve elemanlarýný kullanýcýdan alarak bir dizi oluþturun.
Bu dizinin en büyük ve en büyük ikinci elemanlarýný bulan bir kod parçasý yazýn.
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



