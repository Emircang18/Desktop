#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Turkish");
	int nsayisi,cifttoplam=0,tekkaretoplam=0,sayac;
	
	printf("Bir N say�s� Giriniz :");
	scanf("%d",&nsayisi);											//Soru 6	N Say�s�na kadar olan tek say�lar�n kareleri Ve �ift say�lar�n toplam�

	for (sayac=1;sayac <= nsayisi;sayac++){
	
		if (sayac%2==0){
			cifttoplam= cifttoplam + sayac;
		}
		else{
			tekkaretoplam = tekkaretoplam + (sayac*sayac);
		}
		
	}

	printf("�ift Say�lar�n Toplam�:  %d\n",cifttoplam);
	printf("Tek say�lar�n kareleri toplam� : %d\n",tekkaretoplam);
	printf("�ift Sat�larr�n ve Tek Say�lar�n Kareleri toplami : %d",cifttoplam+tekkaretoplam);



}
