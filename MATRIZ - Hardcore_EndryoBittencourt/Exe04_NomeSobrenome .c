#include <stdio.h>
#include <stdlib.h>

int main() {
    float estoque[5][3];
    int i, j;

	printf("\nEndryo Gabriel Bittencourt\n");
    for(i = 0; i < 4; i++) {
        printf("Armazem %d:\n", i+1);
        for(j = 0; j < 3; j++) {
            printf("Produto %d: ", j+1);
            scanf("%f", &estoque[i][j]);
        }
    }

    printf("Custos:\n");
    for(j = 0; j < 3; j++) {
        printf("Produto %d: R$ ", j+1);
        scanf("%f", &estoque[4][j]);
    }

    printf("\na) Itens por armazem:\n");
    for(i = 0; i < 4; i++) {
        float total = 0;
        for(j = 0; j < 3; j++) {
            total += estoque[i][j];
        }
        printf("Armazem %d: %.0f\n", i+1, total);
    }

    printf("\nb) Armazem com maior estoque do produto 2:\n");
    int armazem_maior_prod2 = 0;
    float maior_estoque_prod2 = estoque[0][1];
    
    for(i = 1; i < 4; i++) {
        if(estoque[i][1] > maior_estoque_prod2) {
            maior_estoque_prod2 = estoque[i][1];
            armazem_maior_prod2 = i;
        }
    }
    printf("Armazem %d (%.0f unidades)\n", armazem_maior_prod2 + 1, maior_estoque_prod2);

    printf("\nc) Armazem com menor estoque total:\n");
    float totais_armazens[4];
    
    for(i = 0; i < 4; i++) {
        totais_armazens[i] = 0;
        for(j = 0; j < 3; j++) {
            totais_armazens[i] += estoque[i][j];
        }
    }
    
    int armazem_menor = 0;
    float menor_estoque = totais_armazens[0];
    
    for(i = 1; i < 4; i++) {
        if(totais_armazens[i] < menor_estoque) {
            menor_estoque = totais_armazens[i];
            armazem_menor = i;
        }
    }
    printf("Armazem %d (%.0f unidades)\n", armazem_menor + 1, menor_estoque);

    printf("\nd) Custo total de cada produto:\n");
    for(j = 0; j < 3; j++) {
        float quantidade_total = 0;
        for(i = 0; i < 4; i++) {
            quantidade_total += estoque[i][j];
        }
        float custo_total = quantidade_total * estoque[4][j];
        printf("Produto %d: R$ %.2f\n", j+1, custo_total);
    }

    printf("\ne) Custo total de cada armazem:\n");
    for(i = 0; i < 4; i++) {
        float custo_total_armazem = 0;
        for(j = 0; j < 3; j++) {
            custo_total_armazem += estoque[i][j] * estoque[4][j];
        }
        printf("Armazem %d: R$ %.2f\n", i+1, custo_total_armazem);
    }

    system("pause");
    return 0;
}