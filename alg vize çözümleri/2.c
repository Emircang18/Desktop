#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Turkish");
	
	int km,m,cm;
	printf("Kilometre giriniz :");
	scanf("%d",&km);												//Soru 5	Km Dönüştürücü
	m=km*1000;
	cm=km*100000;
	printf("Kilometrenizin metre karşılığı : %d\n",m);
	printf("Kilometrenizin santimetre karşılığı %d ",cm);
}

