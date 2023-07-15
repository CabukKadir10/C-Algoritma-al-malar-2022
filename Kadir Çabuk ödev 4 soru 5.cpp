/*
5-)  main fonksiyonu kendi kendini çaðýrabilir mi? main fonksiyonunu içeren bir program yazýn.
Programýnýz static olarak bildirilen ve ilk deðeri 1 olan sayac deðiþkenini içersin.
Bu deðiþken main fonksiyonu her çaðrýldýðýnda 1 artýrýlsýn. Programý çalýþtýrýnca ne oldu?
(Program çalýþtýrýldýðýnda ne olduðunu yorum olarak ekleyebilirsiniz.)*/

#include<stdio.h>

int main(int);

int main(){
	int sayac;
	
	for(int i=1;i<5;i++){
		printf("%d\n",main(sayac));
	}
	
	return 0;
}

int main(int sayac){
	sayac++;
	
	return sayac;
}

// main fonksiyonu kendi kendini caðiramaz. Cunku bir programda sadece tek main fonksiyonu olur. Bir programda iki ana fonksiyon olmasi dahilinde program error verir


