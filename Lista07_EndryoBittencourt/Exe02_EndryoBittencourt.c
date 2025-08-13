#include <stdio.h>
#include <stdlib.h> 

int main() {
    char modelos[5][20]; 
    float consumos[5];   
    int mais_economico = 0;
    
    printf("Endryo Gabriel Bittencourt\n");
    printf("consumo de veiculos\n\n");
    
    for(int i = 0; i < 5; i++) {
        printf("Modelo do %do veiculo: ", i+1);
        scanf("%19s", modelos[i]);
        
        printf("Consumo do %s (km/l): ", modelos[i]);
        scanf("%f", &consumos[i]);
        
        if(consumos[i] > consumos[mais_economico]) {
            mais_economico = i;
        }
    }

    printf("a) Mais economico: %s (%.1f km/l)\n", 
           modelos[mais_economico], consumos[mais_economico]);
    
    printf("\nb) Litros para 1000 km:\n");
    for(int i = 0; i < 5; i++) {
        printf("- %s: %.1f litros\n", modelos[i], 1000.0/consumos[i]);
    }

    system("pause");
    return 0;
}