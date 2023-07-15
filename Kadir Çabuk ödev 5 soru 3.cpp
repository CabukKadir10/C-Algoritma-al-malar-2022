/*
3-) 
(Eratosthenes eleði) Sadece kendisine ve bire tam olarak bölünebilen sayýlara asal sayýlar denir.
Eratosthenes eleði, bir asal sayýlarý bulma metodudur. Þu þekilde çalýþýr:
3.1) Bütün elemanlarýnýn ilk deðerleri 1(doðru) olan bir dizi oluþturun.
Belirteçleri asal sayý olan dizi elemanlarýnýn deðeri 1, diðerleri ise 0 olacaktýr.
3.2) Belirteci 2 olan elemandan baþlayarak (belirteci 1 olan eleman mutlaka asal 
olmalýdýr.) , deðeri 1 olan bir eleman her zaman bulunabilir. Dizinin kalanýnda 
döngü ile ilerleyin ve belirteci, deðeri 1 olan bir elemanýn belirtecinin katý olan dizi 
elemanlarýna 0 atayýn. Belirteci 2 olan eleman için 2‘nin ilerisinde 2‘nin katý olan 
bütün dizi elemanlarýnýn (belirteci 4, 6, 8, 10 vs.) deðeri 0 olmalýdýr. Belirteci 3 olan 
eleman için 3‘ün ilerisinde 3‘ün katý olan bütün dizi elemanlarýnýn(belirteci 6, 9, 12, 
15 vs.) deðeri 0 olmalýdýr.
Bu iþlem bittiðinde belirtec bilgisi asal olan elemanlarýn deðerleri 1 olarak kalýr.
Bu belirteçler ekrana yazdýrýlabilir.
1000 elemaný olan bir diziyi kullanarak 1 den 999 a kadar olan sayýlarýn içinde asal olanlarýný bulan bir program yazýnýz.
Eleman 0‘ý ihmal ediniz.
*/
#include<stdio.h>

int main(){
	int dizi[1000];
	int asalDizi[4]={2,3,5,7};
	int i,j,kontrol;
	
	for(i=1;i<1000;i++){
		dizi[i]=1;
	}
	
	for(i=0;i<4;i++){
		kontrol= asalDizi[i];
		for(j=1;j<1000;j++){
			if(j%kontrol==0){
				dizi[j]=0;
			}
		}	
	}
	for(j=0;j<4;j++){
		printf("%d\t",asalDizi[j]);
	}
	
	for(i=2;i<1000;i++){
		if(dizi[i]==1){
			printf("%d\t",i);
		}
	}
	return 0;
}


