#include <stdio.h>
#include <stdlib.h>

int main(){
	int numeros[9];
	int tem_primo = 0;
	
	printf("primos\n\n");
	for(int i = 0; i < 9; i++) {
		printf("Digite o numero:", i+1);
		scanf("%d", &numeros[i]);
	}
	printf("\nposicoes dos numeros primos\n");
	
	for(int i = 0; i <9; i++){
		int eh_primo = (numeros[i] > 1) ? 1 : 0;
		
		for(int j = 2; j <= numeros[i]/2; j++){
			if(numeros[i] % j == 0){
				eh_primo = 0;
				break;
			}
		}
		if(eh_primo) {
			printf("numero %d na posicao %d\n", numeros[i], i);
			tem_primo = 1;
		}
	}
	if(!tem_primo) {
		printf("nao possui numeros primos\n");
	}
	system("pause");
	return 0;
}