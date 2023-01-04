#include <stdio.h>
#include <math.h>

int n;
int rec1N(int x){
if (x == n+1)
return; 
printf("%d\n", x++);
return rec1N(x);
}
int count = 0;
int kacBasamak(int x){

if (x == 0)
return;
count++;
return kacBasamak(x/10);
}
int tersYazdirma(int x){
if (x == 0)
return;
printf("%d", (x% 10));
return tersYazdirma(x/10);
}
int EBOB(int x, int as, int bs){
if (as % x == 0 && bs % x == 0)
return x;
return EBOB(x-1, as, bs);
}
int EKOK(int x, int as, int bs){
if ( x %as == 0 && x % bs == 0)
return x;
return EKOK(x+1, as, bs);
}
int main(){
printf("n:");
scanf("%d", &n);
rec1N(1); 
int sayi = 0;
printf("Basamak sayisi bulunacak sayiyi gir:");
scanf("%d", &sayi);
kacBasamak(sayi);
printf("%d sayisi %d basamaklidir...\n", sayi, count);
tersYazdirma(sayi);
int a,b;
printf("\nEbob ve Ekok icin a v b sayilarini giriniz:\n");
printf("a:");
scanf("%d", &a);
printf("b:");
scanf("%d", &b);
int max = a;
if (max < b)
max = b;
int ebo = EBOB(max, a, b);
int eko = EKOK(max, a, b);
printf("\nEKOK:%d", eko);
printf("\nEBOB:%d",ebo);

}
