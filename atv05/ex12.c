#include <stdio.h>

int somar(int a, int b) { return a + b; }
int subtrair(int a, int b) { return a - b; }
int multiplicar(int a, int b) { return a * b; }
int dividir(int a, int b) { return b != 0 ? a / b : 0; }

int main() {
    int a, b, opcao;
    int (*operacoes[4])(int, int) = {somar, subtrair, multiplicar, dividir};

    printf("Digite 1 para somar;\n");
    printf("Digite 2 para subtrair;\n");
    printf("Digite 3 para multiplicar;\n");
    printf("Digite 4 para dividir;\n");
    scanf("%d", &opcao);

    printf("Insira o primeiro valor:\n");
    scanf("%d", &a);

    printf("Insira o segundo valor:\n");
    scanf("%d", &b);

    if (opcao >= 1 && opcao <= 4) {
        if (opcao == 4 && b == 0) {
            printf("Divisão por zero.\n");
        } else {
            printf("Resultado: %d\n", operacoes[opcao - 1](a, b));
        }
    } else {
        printf("Opção inválida.\n");
    }

    return 0;
}