#include <stdio.h>
#include <locale.h>

int main(){
	int yukseklik,taban,alan;
	printf("Yukseklik giriniz :");
	scanf("%d",&yukseklik);											//	Soru 1   Dik ��genin Alan�
	printf("Taban giriniz: ");
	scanf("%d",&taban);

	printf("alan = %f",taban*yukseklik*0.5);
}

