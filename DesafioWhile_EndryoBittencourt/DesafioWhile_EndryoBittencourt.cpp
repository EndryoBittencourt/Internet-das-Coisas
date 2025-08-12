#include <stdio.h>

int main() {
float preco_unitario, custo_estocagem, imposto, preco_final;
char refrigeracao, categoria;
int i = 0;

float soma_adicionais = 0, maior_preco = 0, menor_preco = 0;
float total_impostos = 0;
int qtd_barato = 0, qtd_normal = 0, qtd_caro = 0;

while (i < 12) {
printf("\nProduto %d:\n", i+1);
printf("Digite o preço unitário: ");
scanf("%f", &preco_unitario);
printf("Digite a refrigeração (S/N): ");
scanf(" %c", &refrigeracao);
printf("Digite a categoria (A/L/V): ");
scanf(" %c", &categoria);

if (refrigeracao == 's') refrigeracao = 'S';
else if (refrigeracao == 'n') refrigeracao = 'N';

if (categoria == 'a') categoria = 'A';
else if (categoria == 'l') categoria = 'L';
else if (categoria == 'v') categoria = 'V';

custo_estocagem = 0; 

if (preco_unitario <= 20) {
if (categoria == 'A') custo_estocagem = 2.00;
else if (categoria == 'L') custo_estocagem = 3.00;
else if (categoria == 'V') custo_estocagem = 4.00;
}
else if (preco_unitario <= 50) {
if (refrigeracao == 'S') custo_estocagem = 6.00;
else custo_estocagem = 0.00;
}
else {
if (refrigeracao == 'S') {
if (categoria == 'A') custo_estocagem = 5.00;
else if (categoria == 'L') custo_estocagem = 2.00;
else if (categoria == 'V') custo_estocagem = 4.00;
} else {
if (categoria == 'L') custo_estocagem = 1.00;
else custo_estocagem = 0.00;
}
}

if (categoria == 'A' && refrigeracao == 'S') {
imposto = preco_unitario * 0.04;
} else {
imposto = preco_unitario * 0.02;
}

preco_final = preco_unitario + custo_estocagem + imposto;

char classificacao[10];
if (preco_final <= 20.00) {
classificacao[0] = 'B'; 
classificacao[1] = 'a'; 
classificacao[2] = 'r';
classificacao[3] = 'a'; 
classificacao[4] = 't'; 
classificacao[5] = 'o';
classificacao[6] = '\0';
qtd_barato++;
} else if (preco_final <= 100.00) {
classificacao[0] = 'N'; 
classificacao[1] = 'o'; 
classificacao[2] = 'r';
classificacao[3] = 'm'; 
classificacao[4] = 'a'; 
classificacao[5] = 'l';
classificacao[6] = '\0';
qtd_normal++;
} else {
classificacao[0] = 'C'; 
classificacao[1] = 'a'; 
classificacao[2] = 'r';
classificacao[3] = 'o'; 
classificacao[4] = '\0';
qtd_caro++;
}

soma_adicionais += custo_estocagem + imposto;
total_impostos += imposto;

if (i == 0) {
maior_preco = preco_final;
menor_preco = preco_final;
} else {
if (preco_final > maior_preco) maior_preco = preco_final;
if (preco_final < menor_preco) menor_preco = preco_final;
}

printf("\nResumo do Produto %d:\n", i+1);
printf("Custo de estocagem: R$ %.2f\n", custo_estocagem);
printf("Imposto: R$ %.2f\n", imposto);
printf("Preço final: R$ %.2f\n", preco_final);
printf("Classificação: %s\n\n", classificacao);

i++;
}

float media_adicionais = soma_adicionais / 12;

printf("\nResultado:\n");
printf("Média dos valores adicionais: R$ %.2f\n", media_adicionais);
printf("Maior preço final: R$ %.2f\n", maior_preco);
printf("Menor preço final: R$ %.2f\n", menor_preco);
printf("Total de impostos: R$ %.2f\n", total_impostos);
printf("Quantidade de produtos Baratos: %d\n", qtd_barato);
printf("Quantidade de produtos Normais: %d\n", qtd_normal);
printf("Quantidade de produtos Caros: %d\n", qtd_caro);
printf("\nEndryo Gabriel Bittencourt\n");

return 0;
}