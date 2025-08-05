#include <stdio.h>

int main() {
printf("\nEndryo Gabriel Bittencourt\n");
float salario = 1000.0; // salaria do começo
float percentual = 1.5; // aumento
int ano_atual;

printf("Digite o ano atual: ");
scanf("%d", &ano_atual);

if (ano_atual <2018){
    printf("Ano deve ser 2018 ou posterior.\n");
    return 1;
}
//faz o aumento de 2018 ate o ano atual.
for (int ano = 2018; ano <= ano_atual; ano++){
    salario = salario + (salario * (percentual / 100.0));
    
//apartir de 2019 o percentual dobra.
if (ano >= 2019){
    percentual = percentual * 2;
}
}

printf("Salario em %d: R$ %.2f\n", ano_atual, salario);
return 0;
}