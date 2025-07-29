/*
EXE 006 - Faça um programa que receba três notas e seus respectivos pesos,
calcule e mostre a média ponderada.
*/
#include <stdio.h>

int main() {
    float n1, n2, n3, p1, p2, p3;
    printf("Digite nota1 peso1 nota2 peso2 nota3 peso3: ");
    scanf("%f %f %f %f %f %f", &n1, &p1, &n2, &p2, &n3, &p3);
    
    float soma_pesos = p1 + p2 + p3;
    float media = (n1*p1 + n2*p2 + n3*p3) / soma_pesos;
    printf("Media ponderada: %.2f\n", media);
    
    printf("Endryo Gabriel Bittencourt\n");
    return 0;
}

