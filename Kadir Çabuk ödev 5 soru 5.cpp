/*
5-)
Bilgisayarlar�n e�itimde s�rekli artan bir rol� vard�r.
Bir ilkokul ��rencisine �arpma i�leminde yard�mc� olacak bir program yaz�n�z.
rand fonksiyonunu kullanarak rastgele 2 adet 1 basamakl� say� �retin ve ekrana �u �ekilde bir soru yazd�r�n: �4 kere 7 ka�t�r ?� 
Daha sonra ��renci cevap versin. Program cevab� kontrol etsin.
E�er cevap do�ruysa "�ok g�zel" yazd�rs�n ve yeni bir soru sorsun.
E�er cevap yanl��sa "l�tfen tekrar deneyin." yazd�rs�n ve ayn� soruyu ��renci do�ru cevap verene kadar sorsun. 
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int num1,num2,cevap, kontrol,cikis;
	
	srand(time(NULL));
		
		num1= rand()%8 + 1;
		num2= rand()%8 + 1;
		cevap=num1*num2;
	
		printf("%d kere %d kactir?\n",num1,num2);
		printf("cevabiniz:\t");
		scanf("%d",&kontrol);
		
		if(kontrol != cevap){
			do{	
				printf("Yanlis Cevap Lutfen Tekrar Deneyiniz...\n");
				printf("%d kere %d kactir?\n",num1,num2);
				printf("cevabiniz:\t");
				scanf("%d",&kontrol);
				if(cevap==kontrol){
					printf("Cok Guzel!\n");
				}
			} while(kontrol!=cevap);
		}else{
			printf("Cok guzel!");
		}
	
		
	
	return 0;
}
