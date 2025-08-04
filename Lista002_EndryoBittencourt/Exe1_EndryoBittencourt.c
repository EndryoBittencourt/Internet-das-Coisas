#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int numero1, numero2, numero3;
    
    printf("Digite um número: \n");
    scanf("%d", &numero1);
    
    printf("Digite outro número: \n");
    scanf("%d", &numero2);
    
    printf("Digite mais um número: \n");
    scanf("%d", &numero3);

    if (numero1 >= numero2 && numero1 >= numero3) {
        printf("O número %d é o maior.\n", numero1);
    } else if (numero2 >= numero1 && numero2 >= numero3) {
        printf("O número %d é o maior.\n", numero2);
    } else {
        printf("O número %d é o maior.\n", numero3);
    }
    printf("Endryo Gabriel Bittencourt");


}