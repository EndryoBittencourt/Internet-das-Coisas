#include <stdio.h>
#include <stdlib.h> 

int main() {
    int numeros[10]; 
    int tem_maior50 = 0;
    
    printf("Endryo Gabriel Bittencourt\n\n");
    printf("numeros maiores que 50\n\n");
    
    for(int i = 0; i < 10; i++) {
        printf("Digite o %do numero: ", i+1);
        scanf("%d", &numeros[i]);
    }

    printf("\nRESP:\n");
    
    for(int i = 0; i < 10; i++) {
        if(numeros[i] > 50) {
            printf("- %d (posicao %d)\n", numeros[i], i);
            tem_maior50 = 1;
        }
    }

    if(!tem_maior50) {
        printf("Nenhum numero maior que 50 encontrado.\n");
    }

    system("pause");
    return 0;
}