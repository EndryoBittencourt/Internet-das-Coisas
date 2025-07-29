/*
EXE 003 - Faça um programa que receba:
- Valor de um depósito
- Valor da taxa de juros
Calcule e mostre:
- Valor do rendimento
- Valor total após o rendimento
*/
#include <stdio.h>

int main() {
    float deposito, taxa;
    printf("Digite o valor do deposito: R$ ");
    scanf("%f", &deposito);
    printf("Digite a taxa de juros (%%): ");
    scanf("%f", &taxa);
    
    float rendimento = deposito * (taxa / 100);
    float total = deposito + rendimento;
    
    printf("Rendimento: R$ %.2f\n", rendimento);
    printf("Valor total: R$ %.2f\n", total);
    
    printf("Endryo Gabriel Bittencourt\n");
    return 0;
}

