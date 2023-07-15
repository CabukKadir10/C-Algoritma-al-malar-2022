/*
1-)
Bir park yeri i�letmesi,3 saate kadar yap�lan parklar i�in minimum 2.00$ almaktad�r.
3 saatin ge�ilmesi halinde her saat i�in 0.5$ almaktad�r.
Maksimum al�nan para ise 24 saatlik park edilmesi halinde 10.00$'d�r.
24 saatten daha uzun hi� bir arac�n park etmedi�ini kabul ediniz.
D�n bu park yerine park etmi� olan m��terilerin �demelerini hesaplayan ve yazd�ran bir program� yaz�n�z.
(Kullan�c�, her m��terinin park saatini girmeli ve ��kt� d�zg�n bir �izelge �eklinde olmal�d�r ve d�n�n
toplam gelirini hesaplamal�d�r.
Program ucretHesapla ad� alt�na bir fonksiyonda her m��teri i�in �creti hesaplamal� ve ��kt� a�a��daki gibi olmal�d�r.) 

*/
/*                                                // NOT: SORUNUN ASIL CEVABI ASAG�DA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
double ucretHesapla(float);                                 // arac sayisi bilinmedi�inde bu program kullanilabilir.
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
		
		yazdir(araba,saat,ucretHesapla(saat)); // scanf'ten sonra deger girildi�inde alt satira ge�iyor. Duzgun bir tablo olu�turmak i�in yazdir fonksiyonu olu�turdum.
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


#include<stdio.h>           // eger araba sayisi 3 ile s�n�rl� ise bu program kullan�labilir.
#include<stdlib.h>

double UcretHesaplama(double);

int main(){
    double no1,no2,no3, saat1,saat2,saat3, ucret1,ucret2,ucret3, toplam1,toplam2;
    
	printf("araba numaralar�n� giriniz\n");
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

