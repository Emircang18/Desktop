#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Turkish");
	int nsayisi,cifttoplam=0,tekkaretoplam=0,sayac;
	
	printf("Bir N sayýsý Giriniz :");
	scanf("%d",&nsayisi);											//Soru 6	N Sayýsýna kadar olan tek sayýlarýn kareleri Ve çift sayýlarýn toplamý

	for (sayac=1;sayac <= nsayisi;sayac++){
	
		if (sayac%2==0){
			cifttoplam= cifttoplam + sayac;
		}
		else{
			tekkaretoplam = tekkaretoplam + (sayac*sayac);
		}
		
	}

	printf("Çift Sayýlarýn Toplamý:  %d\n",cifttoplam);
	printf("Tek sayýlarýn kareleri toplamý : %d\n",tekkaretoplam);
	printf("Çift Satýlarrýn ve Tek Sayýlarýn Kareleri toplami : %d",cifttoplam+tekkaretoplam);



}
