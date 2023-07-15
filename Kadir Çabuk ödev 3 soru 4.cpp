//4-) bu soruda þekil çizdirme istiyordu
#include<stdio.h>

int main(){
	int i,j,boyut=10;
	
	for(i=1;i<=boyut;i++){
		for(j=0;j<i;j++){
			printf("*");
		}
		printf("\n");
	}
	
	printf("\n\n");
	
	for(i=1;i<=boyut;i++){
		for(j=0;j<boyut-i +1;j++){
			printf("*");
		}
		printf("\n");
	}
	
	printf("\n\n");
	
	for(i=1;i<=boyut;i++){
		for(j=0;j<i;j++){
			printf(" ");
		}
		
		for(j=0;j<boyut-i +1;j++){
			printf("*");
		}
		printf("\n");
	}
	
	printf("\n\n");
	
	for(i=1;i<=10;i++){
		for(j=0;j<boyut -i;j++){
			printf(" ");
		}
		for(j=0;j<i;j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
