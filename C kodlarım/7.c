#include <stdio.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "Turkish");
	float pi=3.14,derece,radyan,grad;
	printf("Derece Giriniz :");
	scanf("%f",&derece);
	grad=derece*180/200;
	radyan = derece/pi;												//Soru 7 Derece t�r�nden girilern say�y� Grad ve Radyana d�n��t�rme
	printf("Derecenizin Grad T�r�nden de�eri  : %f\n",grad);
	printf("Derecenizin Radyan T�r�nden de�eri  : %f",radyan);

	
	
}

