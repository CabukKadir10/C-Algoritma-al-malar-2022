/*4-) Ekran�n soluna dayal� olarak y�ld�z karakterlerinden olu�an ve kenar�,
kenar tam say� de�i�keni ile al�nan fonksiyonun ��kt�s� a�a��da g�r�lmektedir.
�rne�in kenar, 4 ise a�a��daki gibidir:
****
****
****
****
Yukar�daki fonksiyonu birde karenin i�in dolduracak karakteri kullan�c�dan alacak �ekilde de�i�tirin.
Parametre ismi icinidoldur olsun. E�er kenar, 5 ve icinidoldur, # ise fonksiyon a�a��daki deseni yazmal�d�r.
#####
#####
#####
#####
#####
Bu sayede istenilen �ekil �izilebilmelidir.*/
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

