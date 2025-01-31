#include <stdio.h>

int main() {
    int vetor[5], chave, encontrado = 0;

    for (int i = 0; i < 5; i++) {
        printf("Insira o dado da posição %d:\n", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("Insira a chave de busca:\n");
    scanf("%d", &chave);

    for (int i = 0; i < 5; i++) {
        if (vetor[i] == chave) {
            printf("Chave encontrada na posição: %d\n", i + 1);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Chave não encontrada!\n");
    }

    return 0;
}