/*
1-) Aþaþýdaki dizileri ekrana yazdýran for ifadelerini yazýnýz.
 a) 3, 8, 13, 18, 23 
 b) 20, 14, 8, 2, -4, -10 

*/
#include<stdio.h>

int main(){
	int dizi1[5]={3,8,13,18,23};
	int dizi2[6]={20,14,8,2,-4,-10};
	printf("dizi1:\n");
	for(int i=0;i<5;i++){
		printf("%d\t",dizi1[i]);
	}
	
	printf("\n");
	
	printf("dizi2:\n");
	for(int i=0;i<6;i++){
		printf("%d\t",dizi2[i]);
	}
	
	return 0;
}
