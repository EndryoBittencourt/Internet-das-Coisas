#include <stdio.h>

int main() {
printf("\nEndryo Gabriel Bittencourt\n");
int codigo[5], veiculos[5], acidentes[5];
int maior_acidente = 0, menor_acidente = 999999;
int cidade_maior = 0, cidade_menor = 0;
int total_veiculos = 0;
int total_acidentes_menos2000 = 0;
int cidades_menos2000 = 0;

// Passo 1: Ler os dados das 5 cidades
for (int i = 0; i < 5; i++) {
printf("\nCidade %d:\n", i + 1);
printf("Codigo: ");
scanf("%d", &codigo[i]);
printf("Numero de veiculos de passeio: ");
scanf("%d", &veiculos[i]);
printf("Numero de acidentes com vitimas: ");
scanf("%d", &acidentes[i]);

// Passo 2: Verificar maior e menor índice de acidentes
if (acidentes[i] > maior_acidente) {
maior_acidente = acidentes[i];
cidade_maior = codigo[i];
}
if (acidentes[i] < menor_acidente) {
menor_acidente = acidentes[i];
cidade_menor = codigo[i];
}

// Passo 3: Somar veículos para a média geral
total_veiculos += veiculos[i];

// Passo 4: Verificar cidades com menos de 2000 veículos
if (veiculos[i] < 2000) {
total_acidentes_menos2000 += acidentes[i];
cidades_menos2000++;
}
}

// Cálculo das médias
float media_veiculos = total_veiculos / 5.0;
float media_acidentes_menos2000 = (cidades_menos2000 > 0) ?
(total_acidentes_menos2000 / (float)cidades_menos2000) : 0;

// Exibir resultados
printf("\n--- RESULTADOS ---\n");
printf("1) Maior indice de acidentes: %d (Cidade %d)\n", maior_acidente, cidade_maior);
printf("2) Menor indice de acidentes: %d (Cidade %d)\n", menor_acidente, cidade_menor);
printf("3) Media de veiculos nas cidades: %.2f\n", media_veiculos);
printf("4) Media de acidentes em cidades com menos de 2000 veiculos: %.2f\n", media_acidentes_menos2000);

return 0;
}