#include <stdio.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "Turkish");
	int A,B,C;
	printf("A kenar�n� giriniz :");
	scanf("%f",&A);
	printf("B kenar�n� Giriniz :");
	scanf("%f",&B);
	printf("C kenar�n� giriniz :");
	scanf("%f",&C);													//	Soru 2  ��gen T�r�
	if (A == B && B == C){
		printf("E�kenar ��gen \n");
		
	}
	else if (A!=B&&B!=C&&A!=C){
		printf("�e�itkenar ��gen\n ");
				
	}
	else {
		printf("�kizkenar ��gen \n");
	}
	
	
}
