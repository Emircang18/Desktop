#include <stdio.h>

int main(){
	int i,x,y,j;
	x=0;
	y=1;
	for(i=1;i<=5;i=i+3){
		x=i;
		for(j=4;j>=1;j=j-2){
			if (i>j){
				x=x+j;
			}
			else{
				y=y*j;
			}
		}
		x=x-i;
		y=y/i;
	}
	
	x=2*x;
	y=y/2;
	printf("x: %d\n",x);
	printf("y: %d",y);
}
