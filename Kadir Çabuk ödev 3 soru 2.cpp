/*
2-) 1'den 15'e kadar olan tek tam say�lar�n �arp�m�n� hesaplayan ve ekrana yazd�ran bir program yaz�n�z.
Ayr�ca program en son bu �arp�mlar�n toplam�n� da ekrana yazd�rmal�d�r.
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
