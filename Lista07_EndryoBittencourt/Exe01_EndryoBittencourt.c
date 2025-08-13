#include <stdio.h>
#include <stdlib.h>

int main() {
    int numeros[9]; 
    int tem_primo = 0;
    
    printf("\nEndryo Gabriel Bittencourt\n");
    printf("numeros primos\n\n");
    
    for(int i = 0; i < 9; i++) {
        printf("Digite o %do numero: ", i+1);
        scanf("%d", &numeros[i]);
    }

    printf("\nRESP:\n");
    
    for(int i = 0; i < 9; i++) {
        if(numeros[i] > 1) {
            int primo = 1;
            for(int j = 2; j <= numeros[i]/2; j++) {
                if(numeros[i] % j == 0) {
                    primo = 0;
                    break;
                }
            }
            if(primo) {
                printf("- Primo: %d (posicao %d)\n", numeros[i], i);
                tem_primo = 1;
            }
        }
    }

    if(!tem_primo) {
        printf("Nenhum numero primo encontrado.\n");
    }

    system("pause"); 
    return 0;
}