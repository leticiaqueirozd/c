#include <stdio.h>

int maior(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else if (num2 > num1) {
        return num2;
    } else {
        printf("Os números são iguais\n");
        return -1; 
    }
}

int main() {
    int num1, num2, resultado;

    printf("Insira o primeiro número:\n");
    scanf("%d", &num1);

    printf("Insira o segundo número:\n");
    scanf("%d", &num2);

    resultado = maior(num1, num2);
    if (resultado != -1) {
        printf("O maior é: %d\n", resultado);
    }

    return 0;
}