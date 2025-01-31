#include <stdio.h>

int main() {
    int opcao, num1, num2;

    printf("Digite 1 para somar;\n");
    printf("Digite 2 para subtrair;\n");
    printf("Digite 3 para multiplicar;\n");
    printf("Digite 4 para dividir;\n");
    scanf("%d", &opcao);

    printf("Insira o primeiro valor:\n");
    scanf("%d", &num1);

    printf("Insira o segundo valor:\n");
    scanf("%d", &num2);

    switch (opcao) {
        case 1:
            printf("Soma: %d\n", num1 + num2);
            break;
        case 2:
            printf("Subtração: %d\n", num1 - num2);
            break;
        case 3:
            printf("Multiplicação: %d\n", num1 * num2);
            break;
        case 4:
            if (num2 != 0) {
                printf("Divisão: %d\n", num1 / num2);
            } else {
                printf("Divisão por zero.\n");
            }
            break;
        default:
            printf("Opção inválida.\n");
    }

    return 0;
}