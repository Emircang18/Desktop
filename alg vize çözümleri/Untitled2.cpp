#include <stdio.h>

int main(){
	int a,b,c,i;
	a=3;
	b=6;
	for(i=1;i<=18;i++){
		if(a%i==0 && b%i==0){
		
		printf("%d",i);
		}
	}
	if(a>b){
		c=a;
	}	
	else{
		c=b;
	}
	for(i=c;i>=1;i--){
		if(i%a==0 && i%b==0){
			printf("%d\n",i);
		}
	}
	printf("%d\n",i);
}

