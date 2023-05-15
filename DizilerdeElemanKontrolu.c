#include <stdio.h>
#include <stdlib.h>
#define MAX_BOYUT 200

int main() {
	
	int dizi[MAX_BOYUT]; // Burada global değişken kullanılmasının nedeni dizi içine yazılacak değerlerin boyutunun belirlenmesidir.
	int boyut,a;
	int yanit,key; // Burada kullanılan yanıt dizi içerinde elemanın varlığının kontrolü içindir.
	
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
	scanf("%d",&key); // Burada kullanılan key değişkeni yani anahtar değişkenle kullanıcıdan alınan eleman saklanır.
	
	for(a=0 ;a < boyut ;a++ ){
		if(dizi[a]==key){
			printf("%d sayisi,dizinin %d. elemanidir.",key,a);
			yanit =1; //Elemanin bulunduğu anlamına gelir.
			break; //if döngüsü içerisinde çıkmaya yarar.
		}
	}
	
	if(!yanit){ //burada ! işareti tersi anlamına gelir yani eleman bulunamadı demektir.
		printf("%d sayisi,dizide bulunamadi",key);
	}
	
	return 0;
}
