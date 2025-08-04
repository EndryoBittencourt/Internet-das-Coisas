

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int idade;

    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    if (idade >= 0 && idade <= 11) {
        printf("A idade de %d é considerada criança.\n", idade);
    } else if (idade >= 12 && idade <= 18) {
        printf("A idade de %d é considerada adolescente.\n", idade);
    } else if (idade >= 19 && idade <= 24) {
        printf("A idade de %d é considerada jovem.\n", idade);
    } else if (idade >= 25 && idade <= 59) {
        printf("A idade de %d é considerada adulto.\n", idade);
    } else if (idade >= 60) {
        printf("A idade de %d é considerada idoso.\n", idade);
    } else {
        printf("Idade inválida.\n");
    }
    printf("Endryo Gabriel Bittencourt");


}