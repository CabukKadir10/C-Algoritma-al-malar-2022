#include<stdio.h>

int main(){
	int alinanYol, harcananBenzin, sonuc, sayac, toplam, ortalama;
	
	while(1){
		printf("Kac galon benzin harcandi(cikis icin -1'e basiniz):\n");
		scanf("%d",&harcananBenzin);
		
		if(harcananBenzin==-1){
			break;
		}
	
		printf("kac kilometre yol alindi:\n");
		scanf("%d",&alinanYol);
		
		sonuc= alinanYol/harcananBenzin;
		printf("Kilometre / galon: %d\n",sonuc);
		
		toplam+=sonuc;
		sayac++;
	}
	
	ortalama= toplam/sayac;
	printf("Toplam ortalama Kilometre / galon: %d\n",ortalama);
	
	return 0;
}
