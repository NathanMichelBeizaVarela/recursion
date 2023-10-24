#include <stdio.h>

void fibonacci (int n, int a, int b){
if (n<=0){
return;
}
if (a>=0){
printf ("%d",a);
}
fibonacci(n-1,b,a+b);
}
int main(){
int n;
printf("ingresa la cantidad de numeros:\n");
	scanf("%d",&n);
	
	printf("secuencia fibonacci:");
	fibonacci(n,0,1);
	printf("\n");
	
	return 0;
}
