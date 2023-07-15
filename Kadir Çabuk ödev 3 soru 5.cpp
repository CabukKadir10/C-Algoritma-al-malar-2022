/*
5-)
Bir þirket, müdürlerine(sabit haftalýk ücret alýrlar),
vardiyalý iþçilerine(40 saate kadar sabit saatlik ücret ve sonrasý için saatlik ücretin 1.5 katý alýrlar),
komisyon iþçilerine (sabit 250$ ve haftalýk brüt satýþlarýn %5.7 sini alýrlar) yada parça iþçilerine(ürettiði her malzeme baþýna sabit ücret alýrlar
--her parça iþçisi tek bir malzeme üzerinde çalýþýr--) maaþ vermektedir.
Her çalýþan tipinin haftalýk maaþýný hesaplayan bir program yazýnýz.
Kaç çalýþan olduðunu bilmiyorsunuz. Her tipte çalýþanýn kendi maaþ kodu vardýr.
Müdürler 1, vardiyalý iþçiler 2, komisyon iþçileri 3 ve parça iþçileri 4.
Bu maaþ kodlarýna göre çalýþanlarýn maaþlarý hesabý için, switch yapýsý kullanýn.
switch içerisinde kullanýcýnýn gerekli deðerleri girmesini saðlayýn.
*/
#include<stdio.h>

int main(){
	float vardiyaMaas, komisyonMaas, parcaMaas, brutSatis;
	int maasKodu, saat, saatlikUcret=10, yapilanParca;
	
	printf("Maas Kodlarý\n\nmudur: 1\nvardiyali isci: 2\nkomisyon iscileri: 3\nparca iscileri: 4\n\n");
	
	printf("hesaplamak istediðiniz maas kodunu giriniz\n");
	scanf("%d",&maasKodu);
	
	switch(maasKodu){
		case 1:
			printf("mudurun maasý haftalik olarak 2500$ almaktadir.\n"); // mudurun maasý 2500$ olsun
			break;
			
			
		case 2:
			printf("lutfen haftalik calisma saatini giriniz\n"); // vardiyali iscinin saatlik kazancý 10 olsun
			scanf("%d",&saat);
			if(saat<=40){
				vardiyaMaas= saat*saatlikUcret;
			}else{
				vardiyaMaas=400 + (saat-40)*(saatlikUcret*3/2);
			}
			printf("vardiyali iscinin aldigi haftalik maasý: %f",vardiyaMaas);
			break;
			
			
		case 3:
			printf("isci yapmissa brut satislarýn toplam degerini yaziniz.\n");
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
