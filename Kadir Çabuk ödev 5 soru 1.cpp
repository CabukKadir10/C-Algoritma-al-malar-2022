/*
1-)
Tek belirte�li bir dizi kullanarak �u problemi ��z�n:
Kullan�c� 10�la 100 aras�nda 20 say� girsin.
Her say� klavyeden al�nd���nda, e�er daha �nce ayn� say� girilmediyse bu say� ekrana yazd�r�ls�n.
Program�n�z,en k�t� ihtimalle 20 farkl� say� girebilme ihtimalini desteklesin ve m�mk�n olan en k���k diziyi kullan�n.
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
