#include<stdio.h>

int main(){
	int i=0;
	while(i<=3000000){
		if(i%1000000==0){
			printf("%d\n",i);
		}
		
		i++;
	}
	
	return 0;
}
// her �� de�eri toplam 0,21 ile 0.23 saniye aras�nda ekrana yazd�rd�.
