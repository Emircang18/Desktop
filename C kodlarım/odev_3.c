#include <stdio.h>
#include <locale.h>
/*
int main(){
	int yukseklik,taban,alan;
	printf("Yukseklik giriniz :");
	scanf("%d",&yukseklik);											//	Soru 1   Dik ��genin Alan�
	printf("Taban giriniz: ");
	scanf("%d",&taban);

	printf("alan = %f",taban*yukseklik*0.5);
}
*/
/*
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
*/
/*
int main(){
	int a,b;
	printf("1. sayi gir:");
	scanf("%d", &a);
	printf("2. sayi gir:");
	scanf("%d", &b);												// Soru 3	Ekok
	
	int i, max = a;
	
	if (max < b)
		max = b;
	
	for(i = max; i <= a*b; i++){
		if(i % a == 0 && i % b == 0){
			printf("\nEKOK: %d\n",i);
			break;
		}
	}
	
}

*/
/*
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
*/
/*
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
*/
/*
int main(){
	setlocale(LC_ALL, "Turkish");
	int nsayisi,cifttoplam=0,tekkaretoplam=0,sayac;
	
	printf("Bir N say�s� Giriniz :");
	scanf("%d",&nsayisi);											//Soru 6	N Say�s�na kadar olan tek say�lar�n kareleri Ve �ift say�lar�n toplam�

	for (sayac=1;sayac <= nsayisi;sayac++){
	
		if (sayac%2==0){
			cifttoplam= cifttoplam + sayac;
		}
		else{
			tekkaretoplam = tekkaretoplam + (sayac*sayac);
		}
		
	}

	printf("�ift Say�lar�n Toplam�:  %d\n",cifttoplam);
	printf("Tek say�lar�n kareleri toplam� : %d\n",tekkaretoplam);
	printf("�ift Sat�larr�n ve Tek Say�lar�n Kareleri toplami : %d",cifttoplam+tekkaretoplam);



}
*/
/*
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
*/
/*
int main(){
	setlocale(LC_ALL,"Turkish");
	int sayac1,sayac2,sayac,nsayisi;
	printf("Ka�a kadar asal say� bulamk istedi�inizi giriniz  :");
	scanf("%d",&nsayisi);
	printf("Bulunan Asal Say�lar�m�z: \n");							//Soru 8 N sayisina kadar asal say� buldurma
   for(sayac1 = 1;sayac1<=nsayisi;sayac1++){
      sayac2 = 0;
      for(sayac=2;sayac<=sayac1/2;sayac++){
         if(sayac1%sayac==0){
            sayac2++;
         break;
      }
   }
   if(sayac2==0 && sayac1!= 1)
      printf("\n%d ",sayac1);
   }	
}
*/
/*
int main(){

	setlocale(LC_ALL, "Turkish");
    int sayac1, sayac2, satirsayisi;
    printf("��genin gitmesini istedi�iniz say�y� girin: ");
    scanf("%d",&satirsayisi);										//Soru 9 Sat�r say�s� kadar numara yazma

    for(sayac1=1; sayac1<=satirsayisi; ++sayac1)
    {
        for(sayac2=1; sayac2<=sayac1; ++sayac2)
        {
            printf("%d ",sayac2);
        }
        printf("\n");
    }

}
*/
