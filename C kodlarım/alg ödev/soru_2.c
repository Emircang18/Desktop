#include <stdio.h>
#include <locale.h>

int asalmi(int n,int x) 
{
	setlocale(LC_ALL,"Turkish");
	int sayac1,sayac2,sayac,nsayisi;
	printf("Ka�a kadar asal say� bulmak istedi�inizi giriniz  :");
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

int main(){
	
	int x,n;
	asalmi(x,n);
}
