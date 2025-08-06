#include <stdio.h>

int main() {
    printf("Endryo Gabriel Bittencourt\n");
int total_criancas = 0;
int total_fem = 0, total_masc = 0;
int total_24meses = 0;

printf("Digite o numero de criancas (todas mortas): ");
if (scanf("%d", &total_criancas) != 1) {
printf("Entrada invalida.\n");
return 1;
}

int i = 0;
while (i < total_criancas) {
char sexo;
int meses_vida = 0;

printf("\nCrianca %d:\n", i + 1);
printf("Sexo (M/F): ");
if (scanf(" %c", &sexo) != 1) {
printf("Entrada invalida.\n");
break;
}

printf("Tempo de vida (meses, 0 se nasceu morta): ");
if (scanf("%d", &meses_vida) != 1) {
printf("Entrada invalida.\n");
break;
}

if (sexo == 'F' || sexo == 'f') {
total_fem++;
} else {
total_masc++;
}

if (meses_vida <= 24) {
total_24meses++;
}

i = i + 1;
}

if (i == total_criancas) {
float perc_fem = (total_criancas > 0) ? (total_fem * 100.0 / total_criancas) : 0;
float perc_masc = (total_criancas > 0) ? (total_masc * 100.0 / total_criancas) : 0;
float perc_24meses = (total_criancas > 0) ? (total_24meses * 100.0 / total_criancas) : 0;

printf("1) Porcentagem de meninas mortas: %.2f%%\n", perc_fem);
printf("2) Porcentagem de meninos mortos: %.2f%%\n", perc_masc);
printf("3) Porcentagem que viveram 24 meses ou menos: %.2f%%\n", perc_24meses);
}

return 0;
}
