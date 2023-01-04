#include <stdio.h>
#include <locale.h>
/*
int main(){
	int yukseklik,taban,alan;
	printf("Yukseklik giriniz :");
	scanf("%d",&yukseklik);											//	Soru 1   Dik üçgenin Alaný
	printf("Taban giriniz: ");
	scanf("%d",&taban);

	printf("alan = %f",taban*yukseklik*0.5);
}
*/
/*
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
	scanf("%d",&km);												//Soru 5	Km Dönüþtürücü
	m=km*1000;
	cm=km*100000;
	printf("Kilometrenizin metre karþýlýðý : %d\n",m);
	printf("Kilometrenizin santimetre karþýlýðý %d ",cm);
}
*/
/*
int main(){
	setlocale(LC_ALL, "Turkish");
	int nsayisi,cifttoplam=0,tekkaretoplam=0,sayac;
	
	printf("Bir N sayýsý Giriniz :");
	scanf("%d",&nsayisi);											//Soru 6	N Sayýsýna kadar olan tek sayýlarýn kareleri Ve çift sayýlarýn toplamý

	for (sayac=1;sayac <= nsayisi;sayac++){
	
		if (sayac%2==0){
			cifttoplam= cifttoplam + sayac;
		}
		else{
			tekkaretoplam = tekkaretoplam + (sayac*sayac);
		}
		
	}

	printf("Çift Sayýlarýn Toplamý:  %d\n",cifttoplam);
	printf("Tek sayýlarýn kareleri toplamý : %d\n",tekkaretoplam);
	printf("Çift Satýlarrýn ve Tek Sayýlarýn Kareleri toplami : %d",cifttoplam+tekkaretoplam);



}
*/
/*
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
*/
/*
int main(){
	setlocale(LC_ALL,"Turkish");
	int sayac1,sayac2,sayac,nsayisi;
	printf("Kaça kadar asal sayý bulamk istediðinizi giriniz  :");
	scanf("%d",&nsayisi);
	printf("Bulunan Asal Sayýlarýmýz: \n");							//Soru 8 N sayisina kadar asal sayý buldurma
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
    printf("Üçgenin gitmesini istediðiniz sayýyý girin: ");
    scanf("%d",&satirsayisi);										//Soru 9 Satýr sayýsý kadar numara yazma

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
