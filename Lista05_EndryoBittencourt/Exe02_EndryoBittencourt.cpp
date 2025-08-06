#include <stdio.h>

int main() {
    printf("Endryo Gabriel Bittencourt\n")
int aprovados = 0, exame = 0, reprovados = 0;
float media_classe = 0;

int i = 0;
while (i < 6) {
float nota1 = 0, nota2 = 0, media = 0;

printf("\nAluno %d:\n", i + 1);

printf("Digite a primeira nota: ");
if (scanf("%f", &nota1) != 1) {
printf("Entrada invalida. Reinicie o programa.\n");
break;
}

printf("Digite a segunda nota: ");
if (scanf("%f", &nota2) != 1) {
printf("Entrada invalida. Reinicie o programa.\n");
break;
}

media = (nota1 + nota2) / 2;
printf("Media do aluno: %.2f\n", media);
media_classe += media;

if (media <= 3) {
printf("Reprovado\n");
reprovados++;
} else if (media < 7) {
printf("Exame\n");
exame++;
} else {
printf("Aprovado\n");
aprovados++;
}

i = i + 1;
}

if (i == 6) {
media_classe = media_classe / 6;
printf("Aprovados: %d\n", aprovados);
printf("Exame: %d\n", exame);
printf("Reprovados: %d\n", reprovados);
printf("Media da classe: %.2f\n", media_classe);
}

return 0;
}