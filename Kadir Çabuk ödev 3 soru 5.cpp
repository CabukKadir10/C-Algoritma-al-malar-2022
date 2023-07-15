/*
5-)
Bir �irket, m�d�rlerine(sabit haftal�k �cret al�rlar),
vardiyal� i��ilerine(40 saate kadar sabit saatlik �cret ve sonras� i�in saatlik �cretin 1.5 kat� al�rlar),
komisyon i��ilerine (sabit 250$ ve haftal�k br�t sat��lar�n %5.7 sini al�rlar) yada par�a i��ilerine(�retti�i her malzeme ba��na sabit �cret al�rlar
--her par�a i��isi tek bir malzeme �zerinde �al���r--) maa� vermektedir.
Her �al��an tipinin haftal�k maa��n� hesaplayan bir program yaz�n�z.
Ka� �al��an oldu�unu bilmiyorsunuz. Her tipte �al��an�n kendi maa� kodu vard�r.
M�d�rler 1, vardiyal� i��iler 2, komisyon i��ileri 3 ve par�a i��ileri 4.
Bu maa� kodlar�na g�re �al��anlar�n maa�lar� hesab� i�in, switch yap�s� kullan�n.
switch i�erisinde kullan�c�n�n gerekli de�erleri girmesini sa�lay�n.
*/
#include<stdio.h>

int main(){
	float vardiyaMaas, komisyonMaas, parcaMaas, brutSatis;
	int maasKodu, saat, saatlikUcret=10, yapilanParca;
	
	printf("Maas Kodlar�\n\nmudur: 1\nvardiyali isci: 2\nkomisyon iscileri: 3\nparca iscileri: 4\n\n");
	
	printf("hesaplamak istedi�iniz maas kodunu giriniz\n");
	scanf("%d",&maasKodu);
	
	switch(maasKodu){
		case 1:
			printf("mudurun maas� haftalik olarak 2500$ almaktadir.\n"); // mudurun maas� 2500$ olsun
			break;
			
			
		case 2:
			printf("lutfen haftalik calisma saatini giriniz\n"); // vardiyali iscinin saatlik kazanc� 10 olsun
			scanf("%d",&saat);
			if(saat<=40){
				vardiyaMaas= saat*saatlikUcret;
			}else{
				vardiyaMaas=400 + (saat-40)*(saatlikUcret*3/2);
			}
			printf("vardiyali iscinin aldigi haftalik maas�: %f",vardiyaMaas);
			break;
			
			
		case 3:
			printf("isci yapmissa brut satislar�n toplam degerini yaziniz.\n");
			scanf("%f",&brutSatis);
			komisyonMaas= 250 + brutSatis*57/1000;
			printf("komisyon iscisinin aldigi haftalik maas: %f",komisyonMaas);
			break;
			
			
		case 4:
			printf("lutfen iscinin haftalik urettigi malzeme sayisini giriniz.\n");
			scanf("%d",&yapilanParca); // parca basina 5$ olsun
			parcaMaas= yapilanParca*5;
			printf("parca iscisinin haftalik maasi: %f",parcaMaas);
			break;
			
			
		default:
			printf("yanlis kodu yazdiniz tekrardan deneyiniz\n");		
	}
	
	return 0;
}
