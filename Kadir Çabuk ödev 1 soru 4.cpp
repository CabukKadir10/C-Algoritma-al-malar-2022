#include<stdio.h>

int main(){
	float yaricap, cap, cevre, alan;
	
	printf("lutfen dairenin yaricapini giriniz.\n");
	scanf("%f",&yaricap);
	
	cap= yaricap * 2;
	cevre= 2*3.14159*yaricap;
	alan= 3.14159*yaricap*yaricap;
	
	printf("dairenin capi: %.5f\n",cap);
	printf("dairenin cevresi: %.5f\n",cevre);
	printf("dairenin alani: %.5f\n",alan);
	
	return 0;
}
