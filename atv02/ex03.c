#include <stdio.h>

int main() {
    float salario, novo_salario;

    printf("Insira o salário:\n");
    scanf("%f", &salario);

    novo_salario = salario * 1.25; // Aumento de 25%
    printf("Novo salário: %.2f\n", novo_salario);

    return 0;
}