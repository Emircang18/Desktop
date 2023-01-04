#include <stdio.h>

int main(){
	
	int a,b,i,ebob;
	printf("a giriniz:");
	scanf("%d",&a);
	printf("b giriniz:");
	scanf("%d",&b);
	
	for(i=1;i<=a*b;i--){
		if(a%i==0&&b%i==0){
			i = ebob;
		
		}
		break;
	}

	printf("Ebob Sayýmýz: %d",ebob);
	
}
