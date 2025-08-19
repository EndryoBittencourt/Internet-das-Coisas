#include<stdio.h>
#include<string.h>
#include<locale.h>

void soma(int a, int b){
int s;//variaveis globais
	s = a + b;
	printf("\nSoma = %d",s);
}
int main()
{
	setlocale(LC_ALL,"portuguese");
		int a, b;
		printf("\nDigite o primeiro numero: ");
		scanf("%d%*c",&a);
		printf("\nDigite o segundo numero: ");
		scanf("%d%*c",&b);
		soma(a,b);
		getchar();
return 0;
}