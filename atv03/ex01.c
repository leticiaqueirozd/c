#include <stdio.h>

int main() {
    int num1, num2;

    printf("Insira o primeiro número:\n");
    scanf("%d", &num1);

    printf("Insira o segundo número:\n");
    scanf("%d", &num2);

    if (num1 > num2) {
        printf("O maior é: %d\n", num1);
    } else if (num2 > num1) {
        printf("O maior é: %d\n", num2);
    } else {
        printf("Os números são iguais\n");
    }

    return 0;
}