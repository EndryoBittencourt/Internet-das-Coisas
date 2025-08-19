#include <stdio.h>
#include <stdlib.h>

int main() {
int vet[18], mat[3][6];
int i, j, k = 0;

printf("\nEndryo Gabriel Bittencourt\n");
printf("Digite 18 numeros:\n");
for(i = 0; i < 18; i++) {
scanf("%d", &vet[i]);
}

for(i = 0; i < 3; i++) {
for(j = 0; j < 6; j++) {
mat[i][j] = vet[k];
k++;
}
}

printf("\nMatriz 3x6:\n");
for(i = 0; i < 3; i++) {
for(j = 0; j < 6; j++) {
printf("%d ", mat[i][j]);
}
printf("\n");
}
system("pause");
return 0;
}