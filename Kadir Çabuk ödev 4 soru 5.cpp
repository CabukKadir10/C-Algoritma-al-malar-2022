/*
5-)  main fonksiyonu kendi kendini çağırabilir mi? main fonksiyonunu içeren bir program yazın.
Programınız static olarak bildirilen ve ilk değeri 1 olan sayac değişkenini içersin.
Bu değişken main fonksiyonu her çağrıldığında 1 artırılsın. Programı çalıştırınca ne oldu?
(Program çalıştırıldığında ne olduğunu yorum olarak ekleyebilirsiniz.)*/

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

// main fonksiyonu kendi kendini cağiramaz. Cunku bir programda sadece tek main fonksiyonu olur. Bir programda iki ana fonksiyon olmasi dahilinde program error verir


