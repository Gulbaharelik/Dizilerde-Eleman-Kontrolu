#include <stdio.h>
#include <stdlib.h>
#define MAX_BOYUT 200

/*
	1.SORU 
a) Dizinin boyutunu ve elemanlar�n� kullan�c�dan isteyiniz.
b) Dizide aranacak olan eleman� kullan�c�dan isteyiniz.
c) Aran�lan eleman�n dizide olup olmad���n�n kontrol�n� Linear Search kullanarak yap�n�z.

*/

int main() {
	
	int dizi[MAX_BOYUT]; // Burada global de�i�ken kullan�lmas�n�n nedeni dizi i�ine yaz�lacak de�erlerin boyutunun belirlenmesidir.
	int boyut,a;
	int yanit,key; // Burada kullan�lan yan�t dizi i�erinde eleman�n varl���n�n kontrol� i�indir.
	
	printf("Lutfen dizinin boyutunu giriniz: ");
	scanf("%d",&boyut);
	printf("\n");
	
	printf("Dizinin elemanlari giriniz: ");
	printf("\n");
	
	for(a=0 ;a < boyut ;a++){
		scanf("%d",&dizi[a]);
	}
	printf("\n");
	
	printf("Dizi icerisinde aranmasi istenen eleman:");
	scanf("%d",&key); // Burada kullan�lan key de�i�keni yani anahtar de�i�kenle kullan�c�dan al�nan eleman saklan�r.
	
	for(a=0 ;a < boyut ;a++ ){
		if(dizi[a]==key){
			printf("%d sayisi,dizinin %d. elemanidir.",key,a);
			yanit =1; //Elemanin bulundu�u anlam�na gelir.
			break; //if d�ng�s� i�erisinde ��kmaya yarar.
		}
	}
	
	if(!yanit){ //burada ! i�areti tersi anlam�na gelir yani eleman bulunamad� demektir.
		printf("%d sayisi,dizide bulunamadi",key);
	}
	
	return 0;
}
