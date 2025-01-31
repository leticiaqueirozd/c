#include <stdio.h>

int main() {
    float num1, num2, resultado = 1;
    int i;

    printf("Insira o primeiro número:\n");
    scanf("%f", &num1);

    printf("Insira o segundo número:\n");
    scanf("%f", &num2);

    for (i = 1; i <= num2; i++) {
        resultado *= num1;
    }

    printf("Resultado: %.2f\n", resultado);

    return 0;
}