/*
2-)
(Havayollar� rezervasyon Sistemi) K���k bir havayollar���irketi, rezervasyon kay�tlar�n� tutmak i�in yeni bir bilgisayar alm��t�r.
Patron, size yeni sistemi C� de programlaman�z� s�ylemi�tir.
Havayollar� bir u�a�a sahiptir ve sizden bu u�a��n b�t�n u�u�lar�n�n rezervasyon kay�tlar�n� tutacak bir program istenmi�tir.
Program�n�z a�a��daki men�y� i�ermelidir. 

�Sigara i�ilen b�l�m� i�in 1"e bas�n. 
�Sigara i�ilmeyen b�l�m� i�in 2"ye bas�n.
E�er kullan�c� 1�e basarsa, program�n�z sigara i�ilen b�l�mden bir koltu�un rezervasyonunu yapmal�d�r.(1-5. koltuklar.)
E�er kullan�c� 2�ye basarsa sigara i�ilmeyen b�l�m�n koltuklar�ndan birinin rezervasyonu yap�lmal�d�r.(6-10. koltuklar).
Daha sonra program�n�z, m��terinin hangi b�l�mden ve ka� numaral� koltu�a rezervasyon yapt�rd���n� g�stermelidir.
Program�n�zda tek belirte�li bir dizi kullan�n�z. Dizi elemanlar�n�n ilk de�erlerini, koltuklar�n bo� oldu�unu g�stermek i�in 0 yap�n�z.
Bir koltu�un rezervasyonu yap�ld���nda ilgili dizi eleman�n� 1 yap�n�z. 
Program�n�z kesinlikle ayn� koltu�a iki rezervasyon yapmamal�.
E�er sigara i�ilen b�l�m dolduysa m��terinin sigara i�ilmeyen b�l�mden rezervasyon yapmak isteyip istemedi�ini sormal�
(tam tersi durum i�inde ayn� i�lemi yapmal�).
E�er cevap evet ise uygun rezervasyon yap�lmal�. E�er hay�rsa �Di�er u�u� 3 saat sonra� yazmal�.

*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int secim;
	int karar;
	int alan1[5]={1,1,1,1,1};
	int alan2[5]={1,1,0,1,1};
	int rezervasyon=0;
	
	printf("Sigara Icilen Bolum icin 1'e Basiniz\n");
	printf("Sigara Icilmeyen Bolum icin 2'ye Basiniz\n\n\n");
	
	printf("Rezervasyon Yapmak istediginiz numarayi yaziniz.\n");
	scanf("%d",&secim);
	
	if(secim==1){
		for(int i=0;i<5;i++){
			if(alan1[rezervasyon]==0){
				alan1[rezervasyon]=1;
				printf("%d.Koltuga Rezervasyon Yapildi.\n",rezervasyon+1);
				printf("Bizi Tercih Ettiginiz Icin Tesekk�r Ederiz ve Hayirli Yolculuklar Dileriz\n");
			}else{
				rezervasyon++;
			}
			
			if(rezervasyon==5){
				printf("Uzgunuz Sigara icilen Bolumde Yer Kalmamistir\n");
				printf("sigara icilmeyen bolumde yer ayirmak istiyorsaniz Lutfen 1'ye basin. Ayirmak istemiyorsaniz 0'a basiniz\n\n");
				scanf("%d",&karar);
				if(karar==1){
					rezervasyon=0;
					for(int i=0;i<5;i++){
						if(alan2[rezervasyon]==0){
							alan2[rezervasyon]=1;
							printf("%d.Koltuga Rezervasyon Yapildi.\n\n",rezervasyon+6);
							printf("Bizi Tercih Ettiginiz Icin Tesekk�r Ederiz ve Hayirli Yolculuklar Dileriz\n");
						}else{
						rezervasyon++;
						}
					}
				}else{
					printf("Diger ucus 3 Saat sonra!\n");
				}
			}
		}
	}else{
		rezervasyon=0;
		for(int i=0;i<5;i++){
			if(alan2[rezervasyon]==0){
				alan2[rezervasyon]=1;
				printf("%d.Koltuga Rezervasyon Yapildi.\n\n",rezervasyon+6);
				printf("Bizi Tercih Ettiginiz Icin Tesekk�r Ederiz ve Hayirli Yolculuklar Dileriz\n");	
			}else{
				rezervasyon++;
			}
			
			if(rezervasyon==5){
				printf("Uzgunuz Sigara icilmeyen Bolumde Yer Kalmamistir\n");
				printf("sigara icilen bolumde yer ayirmak istiyorsaniz Lutfen 1'ye basin. Ayirmak istemiyorsaniz 0'a basiniz\n\n");
				scanf("%d",&karar);
				if(karar==1){
					rezervasyon=0;
					for(int i=0;i<5;i++){
						if(alan1[rezervasyon]==0){
							alan1[rezervasyon]=1;
							printf("%d.Koltuga Rezervasyon Yapildi.\n\n",rezervasyon+1);
							printf("Bizi Tercih Ettiginiz Icin Tesekk�r Ederiz ve Hayirli Yolculuklar Dileriz\n");	
						}else{
						rezervasyon++;
						}
					}
				}else{
					printf("Diger ucus 3 Saat sonra!\n");
				}
			}
			
		}
	}

	return 0;	
}
