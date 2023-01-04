#include <stdio.h>
#include <locale.h>

int asalmi(int n,int x) 
{
	setlocale(LC_ALL,"Turkish");
	int sayac1,sayac2,sayac,nsayisi;
	printf("Kaça kadar asal sayý bulmak istediðinizi giriniz  :");
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

int main(){
	
	int x,n;
	asalmi(x,n);
}
