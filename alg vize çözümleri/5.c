#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Turkish");
	int alis,kar;
	float satis;
	printf("Al�� fiyat�n� Girniz : ");
	scanf("%d",&alis);
	printf("Kar giriniz : ");
	scanf("%d",&kar);
	satis=alis+(alis*kar/100);
	printf("sat�s fiyat�n�z : %f",satis);
	
}
