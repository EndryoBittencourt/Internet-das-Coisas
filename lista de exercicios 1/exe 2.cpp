/*
EXE 002 - Faça um programa que receba o salário base de um funcionário, calcule e mostre:
- O salário a receber
- Valor da gratificação (5%)
- Valor do imposto (7%)
*/
#include <stdio.h>

int main() {
    float salario;
    printf("Digite o salario base: ");
    scanf("%f", &salario);
    
    float gratificacao = salario * 0.05;
    float imposto = salario * 0.07;
    float salario_receber = salario + gratificacao - imposto;
    
    printf("Gratificacao (5%%): R$ %.2f\n", gratificacao);
    printf("Imposto (7%%): R$ %.2f\n", imposto);
    printf("Salario a receber: R$ %.2f\n", salario_receber);
    
    printf("Endryo Gabriel Bittencourt\n");
    return 0;
}

