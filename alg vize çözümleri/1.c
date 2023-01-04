#include <stdio.h>
#include <locale.h>



int main(){
	setlocale(LC_ALL, "Turkish");
	float yaricap,yukseklik,alan,hacim;
	int pi=3;
	printf("Yaricap giriniz :");
	scanf("%f",&yaricap);
	printf("Yukseklik giriniz :");									//	Soru 4	Silindirin Alan ve Hacmi
	scanf("%f",&yukseklik);
	alan=(2*pi*yaricap*yukseklik) + (2*pi*yaricap*yaricap);
	hacim=pi*yaricap*yaricap*yukseklik;
	printf("Alan = %f\n",alan);
	printf("Hacim = %f",hacim);
}

