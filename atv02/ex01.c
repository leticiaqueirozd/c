#include <stdio.h>

int main() {
    int num1, num2, num3, num4, soma;

    printf("Informe quatro números, em sequência:\n");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    soma = num1 + num2 + num3 + num4;
    printf("Resultado da soma: %d\n", soma);

    return 0;
}