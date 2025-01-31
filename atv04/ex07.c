#include <stdio.h>

int main() {
    int vet[8], positivos[8], negativos[8];
    int countPos = 0, countNeg = 0;

    for (int i = 0; i < 8; i++) {
        printf("Insira o dado vet1[%d]:\n", i);
        scanf("%d", &vet[i]);
    }

    for (int i = 0; i < 8; i++) {
        if (vet[i] > 0) {
            positivos[countPos++] = vet[i];
        } else if (vet[i] < 0) {
            negativos[countNeg++] = vet[i];
        }
    }

    printf("Vetor de positivos:\n");
    for (int i = 0; i < countPos; i++) {
        printf("%d ", positivos[i]);
    }
    printf("\n");

    printf("Vetor de negativos:\n");
    for (int i = 0; i < countNeg; i++) {
        printf("%d ", negativos[i]);
    }
    printf("\n");

    return 0;
}