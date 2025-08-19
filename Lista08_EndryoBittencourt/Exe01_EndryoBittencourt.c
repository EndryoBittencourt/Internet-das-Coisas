#include <stdio.h>
#include <stdlib.h>

int main() {
	int M[2][2], R[2][2], maior;
	int i, j;

printf("Digite 4 numeros:\n");
	for(i = 0; i < 2; i++) {
		for(j = 0; j < 2; j++) {
			scanf("%d", &M[i][j]);
			if(M[i][j] > maior) maior = M[i][j];
}
}

for(i = 0; i < 2; i++) {
	for(j = 0; j < 2; j++) {
		R[i][j] = M[i][j] * maior;
}
}

printf("\nResultado:\n");
printf("\nmaior numero: %d\n", maior);
for(i = 0; i < 2; i++) {
	for(j = 0; j < 2; j++) {
		printf("\nR[%d][%d] = %d\n", i, j, R[i][j]);
}
printf("\nEndryo Gabriel Bittencourt\n");
}

system("pause");
return 0;
}