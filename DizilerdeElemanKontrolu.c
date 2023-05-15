#include <stdio.h>
#include <stdlib.h>
#define MAX_BOYUT 200

/*
	1.SORU 
a) Dizinin boyutunu ve elemanlarýný kullanýcýdan isteyiniz.
b) Dizide aranacak olan elemaný kullanýcýdan isteyiniz.
c) Aranýlan elemanýn dizide olup olmadýðýnýn kontrolünü Linear Search kullanarak yapýnýz.

*/

int main() {
	
	int dizi[MAX_BOYUT]; // Burada global deðiþken kullanýlmasýnýn nedeni dizi içine yazýlacak deðerlerin boyutunun belirlenmesidir.
	int boyut,a;
	int yanit,key; // Burada kullanýlan yanýt dizi içerinde elemanýn varlýðýnýn kontrolü içindir.
	
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
	scanf("%d",&key); // Burada kullanýlan key deðiþkeni yani anahtar deðiþkenle kullanýcýdan alýnan eleman saklanýr.
	
	for(a=0 ;a < boyut ;a++ ){
		if(dizi[a]==key){
			printf("%d sayisi,dizinin %d. elemanidir.",key,a);
			yanit =1; //Elemanin bulunduðu anlamýna gelir.
			break; //if döngüsü içerisinde çýkmaya yarar.
		}
	}
	
	if(!yanit){ //burada ! iþareti tersi anlamýna gelir yani eleman bulunamadý demektir.
		printf("%d sayisi,dizide bulunamadi",key);
	}
	
	return 0;
}
