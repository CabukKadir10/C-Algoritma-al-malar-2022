/*
2-) A�a��daki her bir k�me i�in, o k�meden rastgele bir say� se�en ve ekrana yazd�ran fonksiyonu yaz�n�z. 
a) 2,4,6,8 
b) 3,5,7,9,11 
c) 6,10,14,18,22 
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int SayiBulmaA();
int SayiBulmaB();
int SayiBulmaC();

int main(){
	
	srand(time(NULL));
	
	printf("A kumesi: %d\n",SayiBulmaA());
	printf("B kumesi: %d\n",SayiBulmaB());
	printf("C kumesi: %d\n",SayiBulmaC());
	
	
	return 0;
}

int SayiBulmaA(){
	int dizi[4]={2,4,6,8}, rast;
	
	rast= dizi[rand()%4];
	
	return rast;	
}

int SayiBulmaB(){
	int dizi[5]={3,5,7,9,11}, rast;
	
	rast= dizi[rand()%4];
	
	return rast;
}

int SayiBulmaC(){
	int dizi[5]={10,14,18,22,26},rast;
	
	rast= dizi[rand()%4];
	
	return rast;
}
