#include <stdio.h>
#include <stdlib.h>

int main() {
char lojas[8][20], produtos[4][20];
float precos[8][4];
int i, j;

for(i = 0; i < 8; i++) {
printf("Nome da loja %d: ", i+1);
scanf("%s", lojas[i]);
}

for(i = 0; i < 4; i++) {
printf("Nome do produto %d: ", i+1);
scanf("%s", produtos[i]);
}

for(i = 0; i < 8; i++) {
for(j = 0; j < 4; j++) {
printf("Preco do %s na %s: ", produtos[j], lojas[i]);
scanf("%f", &precos[i][j]);
}
}

printf("\nAte R$ 60,00:\n");
for(i = 0; i < 8; i++) {
for(j = 0; j < 4; j++) {
if(precos[i][j] <= 60.00) {
printf("%s - %s: R$ %.2f\n", produtos[j], lojas[i], precos[i][j]);
printf("\nEndryo Gabriel Bittencourt\n");
}
}
}

system("pause");
return 0;
}