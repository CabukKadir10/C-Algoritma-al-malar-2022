/*
3-)
Kullan�c�dan bir n say�s� al�n. 1' den n'e kadar olan say�lar�n fakt�riyelini hesaplayan ve �izelge �eklinde ekrana yazd�ran bir program yaz�n�z.
20 fakt�riyeli hesaplamada kar��n�za ��kacak sorun nedir? 
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
/* 20 faktoriyeli hesaplarken max int de�erini a�t���ndan dolay� ondan sonraki degerler i�in bellekte bulunan adresi d�nd�r�yor diye d���n�yorum.
faktoriyel 12e kadar bir sorun yok ama ondan sonraki de�erlerde sorun olu�uyor. */
