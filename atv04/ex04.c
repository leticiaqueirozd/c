#include <stdio.h>

void dividir100(float vetor[5]) {
    printf("Conteúdo dividido por 100:\n");
    for (int i = 0; i < 5; i++) {
        printf("%.1f\n", vetor[i] / 100);
    }
}

int main() {
    float vetor[5];

    for (int i = 0; i < 5; i++) {
        printf("Insira o dado da posição %d:\n", i + 1);
        scanf("%f", &vetor[i]);
    }

    dividir100(vetor);

    return 0;
}