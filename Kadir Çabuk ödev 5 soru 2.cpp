/*
2-)
(Havayollarý rezervasyon Sistemi) Küçük bir havayollarýþþirketi, rezervasyon kayýtlarýný tutmak için yeni bir bilgisayar almýþtýr.
Patron, size yeni sistemi C‘ de programlamanýzý söylemiþtir.
Havayollarý bir uçaða sahiptir ve sizden bu uçaðýn bütün uçuþlarýnýn rezervasyon kayýtlarýný tutacak bir program istenmiþtir.
Programýnýz aþaðýdaki menüyü içermelidir. 

“Sigara içilen bölüm” için 1"e basýn. 
“Sigara içilmeyen bölüm” için 2"ye basýn.
Eðer kullanýcý 1‘e basarsa, programýnýz sigara içilen bölümden bir koltuðun rezervasyonunu yapmalýdýr.(1-5. koltuklar.)
Eðer kullanýcý 2‘ye basarsa sigara içilmeyen bölümün koltuklarýndan birinin rezervasyonu yapýlmalýdýr.(6-10. koltuklar).
Daha sonra programýnýz, müþterinin hangi bölümden ve kaç numaralý koltuða rezervasyon yaptýrdýðýný göstermelidir.
Programýnýzda tek belirteçli bir dizi kullanýnýz. Dizi elemanlarýnýn ilk deðerlerini, koltuklarýn boþ olduðunu göstermek için 0 yapýnýz.
Bir koltuðun rezervasyonu yapýldýðýnda ilgili dizi elemanýný 1 yapýnýz. 
Programýnýz kesinlikle ayný koltuða iki rezervasyon yapmamalý.
Eðer sigara içilen bölüm dolduysa müþterinin sigara içilmeyen bölümden rezervasyon yapmak isteyip istemediðini sormalý
(tam tersi durum içinde ayný iþlemi yapmalý).
Eðer cevap evet ise uygun rezervasyon yapýlmalý. Eðer hayýrsa “Diðer uçuþ 3 saat sonra” yazmalý.

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
				printf("Bizi Tercih Ettiginiz Icin Tesekkür Ederiz ve Hayirli Yolculuklar Dileriz\n");
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
							printf("Bizi Tercih Ettiginiz Icin Tesekkür Ederiz ve Hayirli Yolculuklar Dileriz\n");
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
				printf("Bizi Tercih Ettiginiz Icin Tesekkür Ederiz ve Hayirli Yolculuklar Dileriz\n");	
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
							printf("Bizi Tercih Ettiginiz Icin Tesekkür Ederiz ve Hayirli Yolculuklar Dileriz\n");	
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
