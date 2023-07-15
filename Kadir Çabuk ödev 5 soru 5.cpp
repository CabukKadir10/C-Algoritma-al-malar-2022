/*
5-)
Bilgisayarlarýn eðitimde sürekli artan bir rolü vardýr.
Bir ilkokul öðrencisine çarpma iþleminde yardýmcý olacak bir program yazýnýz.
rand fonksiyonunu kullanarak rastgele 2 adet 1 basamaklý sayý üretin ve ekrana þu þekilde bir soru yazdýrýn: “4 kere 7 kaçtýr ?” 
Daha sonra öðrenci cevap versin. Program cevabý kontrol etsin.
Eðer cevap doðruysa "Çok güzel" yazdýrsýn ve yeni bir soru sorsun.
Eðer cevap yanlýþsa "lütfen tekrar deneyin." yazdýrsýn ve ayný soruyu öðrenci doðru cevap verene kadar sorsun. 
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
