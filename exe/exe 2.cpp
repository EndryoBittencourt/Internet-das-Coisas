#include <stdio.h>
#include <stdlib.h>

int main(){
	char modelos[5][20];
	float consumos[5];
	int mais_economico = 0;
	
	printf("consumo\n\n");
	
	for(int i = 0; i < 5; i++){
		printf("modelo do %do carro:", i+1);
		scanf("%19s", modelos[i]);
		
		printf("consumo por km do %s:", modelos[i]);
		scanf("%f", &consumos[i]);
		
		if(consumos[i] > consumos[mais_economico]) {
			mais_economico = i;
		}
	}
	printf("\ncarro mais economico: %s(%.1f km/1)\n" modelos[mais_economico], consumos[mais_economico]);
	
	printf("\nlitros para 1000km:\n");
	for(int i = 0; i < 5; i++){
		float litros = 1000.0f / consumos[i];
		printf("%s: %.2f litros\n", modelos[i], litros);
	}
	system("pause");
	return 0;
}