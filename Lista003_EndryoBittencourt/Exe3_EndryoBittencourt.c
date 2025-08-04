#include <stdio.h>

int main()
{
    int opcao;
    float salario, resultado;

    printf("Menu de opções:\n");
    printf("1) Imposto\n");
    printf("2) Novo salário\n");
    printf("3) Classificação\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            printf("Digite o salário do funcionário: ");
            scanf("%f", &salario);

            if (salario <= 500)
                resultado = salario * 0.05;
            else if (salario <= 850)
                resultado = salario * 0.10;
            else
                resultado = salario * 0.15;

            printf("Valor do imposto é: R$ %.2f\n", resultado);
            break;

        case 2:
            printf("Digite o salário do funcionário: ");
            scanf("%f", &salario);

            if (salario <= 450)
                resultado = salario + 100;
            else if(salario <= 749)
                resultado = salario + 75;
               
            else if (salario <= 50)
                resultado = salario + 50;
               
            else
                resultado = salario + 25;

            printf("Novo salário é: R$ %.2f\n", resultado);
            break;

        case 3:
            printf("Digite o salário do funcionário: ");
            scanf("%f", &salario);

            if (salario <= 700)
                printf("Classificação: Mal remunerado\n");
            else
                printf("Classificação: Bem remunerado\n");
            break;

        default:
            printf("Opção inválida.\n");
    }
    printf("Endryo Gabriel Bittencourt");

    return 0;
}

