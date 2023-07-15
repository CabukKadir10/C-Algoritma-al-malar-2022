/*
3-) 
(Eratosthenes ele�i) Sadece kendisine ve bire tam olarak b�l�nebilen say�lara asal say�lar denir.
Eratosthenes ele�i, bir asal say�lar� bulma metodudur. �u �ekilde �al���r:
3.1) B�t�n elemanlar�n�n ilk de�erleri 1(do�ru) olan bir dizi olu�turun.
Belirte�leri asal say� olan dizi elemanlar�n�n de�eri 1, di�erleri ise 0 olacakt�r.
3.2) Belirteci 2 olan elemandan ba�layarak (belirteci 1 olan eleman mutlaka asal 
olmal�d�r.) , de�eri 1 olan bir eleman her zaman bulunabilir. Dizinin kalan�nda 
d�ng� ile ilerleyin ve belirteci, de�eri 1 olan bir eleman�n belirtecinin kat� olan dizi 
elemanlar�na 0 atay�n. Belirteci 2 olan eleman i�in 2�nin ilerisinde 2�nin kat� olan 
b�t�n dizi elemanlar�n�n (belirteci 4, 6, 8, 10 vs.) de�eri 0 olmal�d�r. Belirteci 3 olan 
eleman i�in 3��n ilerisinde 3��n kat� olan b�t�n dizi elemanlar�n�n(belirteci 6, 9, 12, 
15 vs.) de�eri 0 olmal�d�r.
Bu i�lem bitti�inde belirtec bilgisi asal olan elemanlar�n de�erleri 1 olarak kal�r.
Bu belirte�ler ekrana yazd�r�labilir.
1000 eleman� olan bir diziyi kullanarak 1 den 999 a kadar olan say�lar�n i�inde asal olanlar�n� bulan bir program yaz�n�z.
Eleman 0�� ihmal ediniz.
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


