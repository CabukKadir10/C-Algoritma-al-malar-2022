/*
5-)  main fonksiyonu kendi kendini �a��rabilir mi? main fonksiyonunu i�eren bir program yaz�n.
Program�n�z static olarak bildirilen ve ilk de�eri 1 olan sayac de�i�kenini i�ersin.
Bu de�i�ken main fonksiyonu her �a�r�ld���nda 1 art�r�ls�n. Program� �al��t�r�nca ne oldu?
(Program �al��t�r�ld���nda ne oldu�unu yorum olarak ekleyebilirsiniz.)*/

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

// main fonksiyonu kendi kendini ca�iramaz. Cunku bir programda sadece tek main fonksiyonu olur. Bir programda iki ana fonksiyon olmasi dahilinde program error verir


