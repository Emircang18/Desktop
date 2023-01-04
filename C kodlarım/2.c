#include <stdio.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "Turkish");
	int A,B,C;
	printf("A kenarýný giriniz :");
	scanf("%f",&A);
	printf("B kenarýný Giriniz :");
	scanf("%f",&B);
	printf("C kenarýný giriniz :");
	scanf("%f",&C);													//	Soru 2  Üçgen Türü
	if (A == B && B == C){
		printf("Eþkenar üçgen \n");
		
	}
	else if (A!=B&&B!=C&&A!=C){
		printf("Çeþitkenar üçgen\n ");
				
	}
	else {
		printf("Ýkizkenar üçgen \n");
	}
	
	
}
