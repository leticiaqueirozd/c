#include <stdio.h>

int main() {
    int num1, num2;

    printf("Insira o primeiro valor:\n");
    scanf("%d", &num1);

    printf("Insira o segundo valor:\n");
    scanf("%d", &num2);

    if (num1 == num2) {
        printf("Multiplicação: %d\n", num1 * num2);
    } else if (num1 > num2) {
        printf("Subtração: %d\n", num1 - num2);
    } else {
        printf("Soma: %d\n", num1 + num2);
    }

    return 0;
}