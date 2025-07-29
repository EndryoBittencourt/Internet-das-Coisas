/*
EXE 005 - Faça um programa que receba três notas,
calcule e mostre a média aritmética.
*/
#include <stdio.h>

int main() {
    float nota1, nota2, nota3;
    printf("Digite as tres notas (separadas por espaco): ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);
    
    float media = (nota1 + nota2 + nota3) / 3;
    printf("Media: %.2f\n", media);
    
    printf("Endryo Gabriel Bittencourt\n");
    return 0;
}
