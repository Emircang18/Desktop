#include <stdio.h>
#include <locale.h>


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

