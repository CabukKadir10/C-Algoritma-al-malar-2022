/*
1-)
Bir park yeri iþletmesi,3 saate kadar yapýlan parklar için minimum 2.00$ almaktadýr.
3 saatin geçilmesi halinde her saat için 0.5$ almaktadýr.
Maksimum alýnan para ise 24 saatlik park edilmesi halinde 10.00$'dýr.
24 saatten daha uzun hiç bir aracýn park etmediðini kabul ediniz.
Dün bu park yerine park etmiþ olan müþterilerin ödemelerini hesaplayan ve yazdýran bir programý yazýnýz.
(Kullanýcý, her müþterinin park saatini girmeli ve çýktý düzgün bir çizelge þeklinde olmalýdýr ve dünün
toplam gelirini hesaplamalýdýr.
Program ucretHesapla adý altýna bir fonksiyonda her müþteri için ücreti hesaplamalý ve çýktý aþaðýdaki gibi olmalýdýr.) 

*/
/*                                                // NOT: SORUNUN ASIL CEVABI ASAGÝDA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
double ucretHesapla(float);                                 // arac sayisi bilinmediðinde bu program kullanilabilir.
void yazdir(float,float,float);

int main(){
	float saat, ucret, toplamSaat, toplamUcret;
	int araba=1;
	
	printf("ARABA\t\tSAAT\t\tUcret\n");
	
	while(saat!=-1){
		printf("saati giriniz(Cikmak icin -1'e basiniz):\t");
	//	system("cls");
		scanf("%f",&saat);
		if(saat==-1){
			break;
		}
		
		yazdir(araba,saat,ucretHesapla(saat)); // scanf'ten sonra deger girildiðinde alt satira geçiyor. Duzgun bir tablo oluþturmak için yazdir fonksiyonu oluþturdum.
		toplamSaat+=saat;
		toplamUcret+=ucretHesapla(saat);
		araba++;
	}
	
	printf("TOPLAM:\t\t%f\t%f",toplamSaat,toplamUcret);
	
	return 0;
}

double ucretHesapla(float saat){
	float ucret;
	
	if(saat<=3){
		ucret=2;
	}else if(saat<24){
		ucret= 2 + (saat-3)/2;
		}else{
			ucret=10;
		}
	
	return ucret;
}

void yazdir(float araba ,float saat,float ucret){
		
		printf("%f\t%f\t%f\n",araba,saat,ucret);
}
*/


#include<stdio.h>           // eger araba sayisi 3 ile sýnýrlý ise bu program kullanýlabilir.
#include<stdlib.h>

double UcretHesaplama(double);

int main(){
    double no1,no2,no3, saat1,saat2,saat3, ucret1,ucret2,ucret3, toplam1,toplam2;
    
	printf("araba numaralarýný giriniz\n");
    scanf("%lf %lf %lf",&no1,&no2,&no3);
    
	printf("otoparkta kalma surelerini giriniz.\n");
    scanf("%lf %lf %lf",&saat1,&saat2,&saat3);
    
	ucret1= UcretHesaplama(saat1);
    ucret2= UcretHesaplama(saat2);
	ucret3= UcretHesaplama(saat3);
	
	system("cls");
	
    printf("ARABA\t\tSAAT\t\tUCRET\n");
    
    printf("%lf\t%lf\t%lf\n",no1,saat1,ucret1);
    
    printf("%lf\t%lf\t%lf\n",no2,saat2,ucret2);
    
    printf("%lf\t%lf\t%lf\n",no3,saat3,ucret3);
    
    toplam1= saat1 + saat2 + saat3;
    toplam2= ucret1 + ucret2 + ucret3;
    
    printf("TOPLAM\t\t%lf\t%lf\n",toplam1,toplam2);
    
    return 0;
}

double UcretHesaplama(double saat){
    double Ucret;
    if(saat <=3){
        Ucret= 2;
    } else if(saat !=24 && saat>3){
        Ucret= 2 + (saat-3)/2;
    } else{
        Ucret= 10;
    }

    return Ucret;
}

