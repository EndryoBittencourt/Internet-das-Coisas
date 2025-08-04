#include <stdio.h>

int main() {
    float a, b, resultado;
    char opcao;

    printf("Digite o primeiro número: ");
    scanf("%f", &a);


    printf("Digite o segundo número: ");
    scanf("%f", &b);

    printf("Digite o operador(+,-,*,/): " );
    scanf(" %c", &opcao);
   

    switch(opcao) {
        case '+':
            resultado = a + b;
            printf("Resultado da soma: %.2f\n", resultado);
            break;
        case '-':
            resultado = a - b;
            printf("Resultado da subtração: %.2f\n", resultado);
            break;
        case '*':
            resultado = a * b;
            printf("Resultado da multiplicação: %.2f\n", resultado);
            break;
        case '/':
            if (b != 0) {
                resultado = a / b;
                printf("Resultado da divisão: %.2f\n", resultado);
            } else {
                printf("Erro: divisão por zero!\n");
            }
            break;

            printf("Endryo Gabriel Bittencourt");
    }
    

    return 0;
}
