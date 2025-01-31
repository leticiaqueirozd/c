#include <stdio.h>

int multiplicar(int a, int b) { return a * b; }
int subtrair(int a, int b) { return a - b; }
int somar(int a, int b) { return a + b; }

int main() {
    int a, b;
    int (*operacoes[3])(int, int) = {multiplicar, subtrair, somar};

    printf("Insira o primeiro valor:\n");
    scanf("%d", &a);

    printf("Insira o segundo valor:\n");
    scanf("%d", &b);

    if (a == b) {
        printf("Multiplicação: %d\n", operacoes[0](a, b));
    } else if (a > b) {
        printf("Subtração: %d\n", operacoes[1](a, b));
    } else {
        printf("Soma: %d\n", operacoes[2](a, b));
    }

    return 0;
}