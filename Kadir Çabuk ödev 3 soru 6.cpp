/*
6-) Switch-case yap�s�n� kullanarak 4 i�lem yapabilecek bir hesap makinesi yap�n.
*/
#include<stdio.h>

int main(){
	float num1,num2,toplama,cikarma,carpma,bolme;
	int islem;
	
	printf("islemler\n\n1:toplama\n2:cikarma\n3:carpma\n4:bolme\n");
	
	printf("girmek istediginiz islemi giriniz.\n");
	scanf("%d",&islem);
	
	switch(islem){
		
		case 1:
			printf("l�tfen iki sayi giriniz.\n");
			scanf("%f%f",&num1,&num2);
			
			toplama= num1 + num2;
			printf("sonuc: %f",toplama);
			break;
		case 2:
			printf("l�tfen iki sayi giriniz.\n");
			scanf("%f%f",&num1,&num2);
			
			cikarma= num1 - num2;
			printf("sonuc: %f",cikarma);
			break;
		case 3:
			printf("l�tfen iki sayi giriniz.\n");
			scanf("%f%f",&num1,&num2);
			
			carpma= num1 * num2;
			printf("sonuc: %f",carpma);
			break;
		case 4:
			printf("l�tfen iki sayi giriniz.\n");
			scanf("%f%f",&num1,&num2);
			
			bolme= num1 / num2;
			printf("sonuc: %f",bolme);
			break;
			
		default:
			printf("yanlis sayiyi girdiniz");
	}
	
	return 0;
}
