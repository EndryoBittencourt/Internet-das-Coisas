/*
EXE 004 - Faça um programa que receba quatro números inteiros,
calcule e mostre a soma desses números.
*/
#include <stdio.h>

int main() {
    int n1, n2, n3, n4;
    printf("Digite quatro numeros inteiros (separados por espaco): ");
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
    
    int soma = n1 + n2 + n3 + n4;
    printf("Soma: %d\n", soma);
    
    printf("Endryo Gabriel Bittencourt\n");
    return 0;
}
