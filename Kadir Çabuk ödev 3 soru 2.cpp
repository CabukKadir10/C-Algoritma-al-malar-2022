/*
2-) 1'den 15'e kadar olan tek tam sayýlarýn çarpýmýný hesaplayan ve ekrana yazdýran bir program yazýnýz.
Ayrýca program en son bu çarpýmlarýn toplamýný da ekrana yazdýrmalýdýr.
*/
#include<stdio.h>

int main(){
	int carpim=1,Toplam;
	
	for(int i=1;i<16;i++){
		if(i%2==1){
			carpim=carpim*i;
			Toplam+=carpim;
		}
	}
	
	printf("carpimlarin toplami: %d\n",Toplam);
	printf("1'den 15'e kadar olan tek sayilarin carpimi: %d\n",carpim);
	
	return 0;
}
