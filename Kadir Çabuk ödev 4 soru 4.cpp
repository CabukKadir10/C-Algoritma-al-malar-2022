/*4-) Ekranýn soluna dayalý olarak yýldýz karakterlerinden oluþan ve kenarý,
kenar tam sayý deðiþkeni ile alýnan fonksiyonun çýktýsý aþaðýda görülmektedir.
Örneðin kenar, 4 ise aþaðýdaki gibidir:
****
****
****
****
Yukarýdaki fonksiyonu birde karenin için dolduracak karakteri kullanýcýdan alacak þekilde deðiþtirin.
Parametre ismi icinidoldur olsun. Eðer kenar, 5 ve icinidoldur, # ise fonksiyon aþaðýdaki deseni yazmalýdýr.
#####
#####
#####
#####
#####
Bu sayede istenilen þekil çizilebilmelidir.*/
#include <stdio.h>

void sekil(int,int);

int main(){
    int kenar,iciniDoldur;
    
    printf("Cizdirmek istediginiz karakteri giriniz:");
    iciniDoldur = getchar();
    
	printf("\nSeklin boyutunu giriniz:");
    scanf("%d", &kenar);
    
	sekil(kenar,iciniDoldur);
    
	return 0;
}
void sekil(int kenar,int iciniDoldur){
    int i, j;

    for (i =1 ; i <= kenar; i++) {
        for (j = 1; j <= kenar; j++) {
            printf(" %c ", iciniDoldur);
        }printf("\n");
    }
}

