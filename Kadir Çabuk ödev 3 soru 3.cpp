/*
3-)
Kullanýcýdan bir n sayýsý alýn. 1' den n'e kadar olan sayýlarýn faktöriyelini hesaplayan ve çizelge þeklinde ekrana yazdýran bir program yazýnýz.
20 faktöriyeli hesaplamada karþýnýza çýkacak sorun nedir? 
*/
#include<stdio.h>

int main(){
	int num, faktoriyel=1;
	
	printf("lutfen faktoriyelini bulmak istediginiz sayiyi yaziniz\n");
	scanf("%d",&num);
	
	for(int i=1;i<=num;i++){
		faktoriyel= faktoriyel * i;
		printf("faktoriyel(%d)=\t %d\n",i,faktoriyel);
	}
	
	return 0;
}
/* 20 faktoriyeli hesaplarken max int deðerini aþtýðýndan dolayý ondan sonraki degerler için bellekte bulunan adresi döndürüyor diye düþünüyorum.
faktoriyel 12e kadar bir sorun yok ama ondan sonraki deðerlerde sorun oluþuyor. */
