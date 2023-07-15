/*
1-)
Tek belirteçli bir dizi kullanarak þu problemi çözün:
Kullanýcý 10‘la 100 arasýnda 20 sayý girsin.
Her sayý klavyeden alýndýðýnda, eðer daha önce ayný sayý girilmediyse bu sayý ekrana yazdýrýlsýn.
Programýnýz,en kötü ihtimalle 20 farklý sayý girebilme ihtimalini desteklesin ve mümkün olan en küçük diziyi kullanýn.
*/
#include<stdio.h>

int main(){
	int dizi[20], num, i, j, sayac=0, boyut=0;
	printf("LUTFEN 10 ILE 100 ARASINDA 20 SAYI GIRINIZ\n\n");
	for(i=0;i<20;i++){
		printf("%d.Sayiyi giriniz.\n",i+1);
		scanf("%d",&num);
		sayac=0;
		for(j=0;j<=i;j++){
			if(dizi[j]==num){
				sayac++;
			}
		}
		
		if(sayac==0){
			dizi[boyut]=num;
			boyut++;
		}
	}
	
	printf("\n\n");
	
	for(i=0;i<boyut;i++){
		printf("%d.Sayi: %d\n",i+1,dizi[i]);
	}
	
	return 0;
}
