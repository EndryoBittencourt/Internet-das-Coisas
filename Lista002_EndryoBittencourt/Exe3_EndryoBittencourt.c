#include <stdio.h>

int main() {
    int num1, num2;

    printf("Digite dois números:\n");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2) {
        num1 = num1 + num2;
        num2 = num1 - num2;
        num1 = num1 - num2;
    }

    printf("Números ordenados: %d %d\n", num1, num2);

    printf("Endryo Gabriel Bittencourt");
}

/*num1 = num1 + num2; → num1 = 10

num2 = num1 - num2; → num2 = 10 - 3 = 7

num1 = num1 - num2; → num1 = 10 - 7 = 3*/