#include <stdio.h>
#include <locale.h>


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

