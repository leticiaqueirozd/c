#include <stdio.h>

int main() {
    int vet1[10], vet2[10], resultante[20];

    for (int i = 0; i < 10; i++) {
        printf("Insira o dado vet1[%d]:\n", i);
        scanf("%d", &vet1[i]);
    }

    for (int i = 0; i < 10; i++) {
        printf("Insira o dado vet2[%d]:\n", i);
        scanf("%d", &vet2[i]);
    }

    for (int i = 0; i < 10; i++) {
        resultante[2 * i] = vet1[i];
        resultante[2 * i + 1] = vet2[i];
    }

    printf("Vetor resultante:\n");
    for (int i = 0; i < 20; i++) {
        printf("%d ", resultante[i]);
    }
    printf("\n");

    return 0;
}