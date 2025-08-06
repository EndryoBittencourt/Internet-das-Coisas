#include <stdio.h>

int main() {
float salario = 1000.0; // Salário inicial em 2018
float percentual = 1.5; // Aumento inicial em 2019
int ano_atual;

printf("Digite o ano atual: ");
scanf("%d", &ano_atual);

if (ano_atual < 2018) {
printf("Ano deve ser 2018 ou posterior.\n");
return 1;
}

// Aplica os aumentos a partir de 2019
for (int ano = 2019; ano <= ano_atual; ano++) {
salario = salario + (salario * (percentual / 100.0));
percentual = percentual * 2; // dobra o percentual a cada ano após 2019
}

printf("Salario em %d: R$ %.2f\n", ano_atual, salario);
return 0;
}
