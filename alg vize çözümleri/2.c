#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Turkish");
	
	int km,m,cm;
	printf("Kilometre giriniz :");
	scanf("%d",&km);												//Soru 5	Km D�n��t�r�c�
	m=km*1000;
	cm=km*100000;
	printf("Kilometrenizin metre kar��l��� : %d\n",m);
	printf("Kilometrenizin santimetre kar��l��� %d ",cm);
}

