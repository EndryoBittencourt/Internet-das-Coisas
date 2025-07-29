/*
EXE 001 - Faça um programa que receba o salário de um funcionário, calcule e mostre:
- O salário atual
- O valor do aumento (25%)
- O novo salário
*/
#include <stdio.h>

int main() {
    float salario;
    printf("Digite o salario atual: ");
    scanf("%f", &salario);
    
    float aumento = salario * 0.25;
    float novo_salario = salario + aumento;
    
    printf("Salario atual: R$ %.2f\n", salario);
    printf("Aumento (25%%): R$ %.2f\n", aumento);
    printf("Novo salario: R$ %.2f\n", novo_salario);
    
    printf("Endryo Gabriel Bittencourt\n");
    return 0;
}

