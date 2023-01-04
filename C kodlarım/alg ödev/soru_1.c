#include <stdio.h>
int tekcift(int n,int i){
	
	int nsayisi,cifttoplam=0,tektoplam=0,sayac;
	
	printf("Sayi Giriniz :");
	scanf("%d",&nsayisi);											

	for (sayac=1;sayac <= nsayisi;sayac++){
	
		if (sayac%2==0){
			cifttoplam= cifttoplam + sayac;
		}
		else{
			tektoplam = tektoplam + sayac;
		}
		
	}
	printf("Cift Sayilarin Toplami:  %d\n",cifttoplam);
	printf("Tek sayilarin  toplami : %d\n",tektoplam);

}

int main(){
	
	int i,n;
	
	tekcift(i,n);
	
}
