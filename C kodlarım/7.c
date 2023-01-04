#include <stdio.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "Turkish");
	float pi=3.14,derece,radyan,grad;
	printf("Derece Giriniz :");
	scanf("%f",&derece);
	grad=derece*180/200;
	radyan = derece/pi;												//Soru 7 Derece türünden girilern sayýyý Grad ve Radyana dönüþtürme
	printf("Derecenizin Grad Türünden deðeri  : %f\n",grad);
	printf("Derecenizin Radyan Türünden deðeri  : %f",radyan);

	
	
}

