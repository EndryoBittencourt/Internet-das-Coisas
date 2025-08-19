#include<stdio.h>
#include<string.h>
#include<locale.h>

int soma(int a, int b){
	return a + b;
}
int main()
{
	setlocale(LC_ALL,"portuguese");
		int a, b, s;
		printf("\nDigite o primeiro numero: ");
		scanf("%d%*c",&a);
		printf("\nDigite o segundo numero: ");
		scanf("%d%*c",&b);
		s = soma(a,b);
		printf("\nSoma = %d",s);
		getchar();
return 0;
}
