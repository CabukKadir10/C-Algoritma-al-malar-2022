#include<stdio.h>
/*
int main(){
	int kenar;
	
	printf("yazdirmak istediginiz karenin kenarini giriniz.\n");
	scanf("%d",&kenar);
	
	for(int i=1;i<=kenar;i++){
		for(int j=1;j<=kenar;j++){
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
*/
int main(){
	int kenar, i=1,j=1;
	
	printf("yazdirmak istediginiz karenin kenarini giriniz.\n");
	scanf("%d",&kenar);
	
	while(i<=kenar){
		while(j<=kenar){
			printf("*");
			j++;
		}
	printf("\n");
	i++;
	j=1;	
	}	
	return 0;
}

