#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Turkish");
	
	int km,m,cm;
	printf("Kilometre giriniz :");
	scanf("%d",&km);												//Soru 5	Km Dönüþtürücü
	m=km*1000;
	cm=km*100000;
	printf("Kilometrenizin metre karþýlýðý : %d\n",m);
	printf("Kilometrenizin santimetre karþýlýðý %d ",cm);
}

