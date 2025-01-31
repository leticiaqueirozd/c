#include <stdio.h>

void isFirstGreater(int numeros[3]) {
    if (numeros[0] > numeros[1] && numeros[0] > numeros[2]) {
        printf("Condição satisfeita\n");
    } else {
        printf("Erro\n");
    }
}

int main() {
    int numeros[3];

    printf("Insira o primeiro número:\n");
    scanf("%d", &numeros[0]);

    printf("Insira o segundo número:\n");
    scanf("%d", &numeros[1]);

    printf("Insira o terceiro número:\n");
    scanf("%d", &numeros[2]);

    isFirstGreater(numeros);

    return 0;
}