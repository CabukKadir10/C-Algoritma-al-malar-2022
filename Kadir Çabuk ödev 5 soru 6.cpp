/*
6-)
Kullanýcýdan bir dizinin elemanlarýný alýp ekrana yazdýrýn.
Daha sonra bu diziyi sýralayýp tekrardan ekrana yazdýrýn.
*/

#include<stdio.h>

int main(){
	int boyut,i,j,num,temp;
	
	printf("lutfen dizinin boyutunu giriniz.\n");
	scanf("%d",&boyut);
	
	int dizi[boyut];
	
	for(i=0;i<boyut;i++){
		printf("%d.Sayiyi giriniz\n",i+1);
		scanf("%d",&num);
		dizi[i]=num;
	}
	
	printf("\n\n");
	printf("Dizinin siralanmadan onceki hali\n");
	for(i=0;i<boyut;i++){
		printf("%d\t",dizi[i]);
	}
	
	for(i=0;i<boyut;i++){
		for(j=0;j<boyut-1;j++){
			if(dizi[j]>=dizi[j+1]){
				temp=dizi[j];
				dizi[j]=dizi[j+1];
				dizi[j+1]=temp;
			}
		}
	}
	
	printf("\n\n");
	
	printf("Dizinin siralandiktan sonraki hali\n");
	for(i=0;i<boyut;i++){
		printf("%d\t",dizi[i]);
	}
	
	return 0;
}
