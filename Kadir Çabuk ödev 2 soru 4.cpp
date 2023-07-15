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
// her üç deðeri toplam 0,21 ile 0.23 saniye arasýnda ekrana yazdýrdý.
