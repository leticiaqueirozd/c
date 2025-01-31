#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Insira o primeiro número:\n");
    scanf("%d", &num1);

    printf("Insira o segundo número:\n");
    scanf("%d", &num2);

    printf("Insira o terceiro número:\n");
    scanf("%d", &num3);

    if (num1 > num2 && num1 > num3) {
        printf("Condição satisfeita\n");
    } else {
        printf("Erro\n");
    }

    return 0;
}