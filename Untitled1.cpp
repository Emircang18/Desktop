#include <stdio.h>
#include <math.h>

int n;
int rec1N(int x){
if (x == n+1)
return 1;
printf("%d\n", x++);
return rec1N(x);
}
int main(){
printf("n:");
scanf("%d", &n);
rec1N(1); 
}
