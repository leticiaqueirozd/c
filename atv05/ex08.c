#include <stdio.h>

int somarVet(int vet[], const int n) {
    int soma = 0;
    int *p;

    for (p = vet; p < vet + n; p++) {
        soma += *p;
    }

    return soma;
}

int main() {
    int vet[5] = {5, 5, 5, 5, 5};

    printf("A soma dos membros do vetor = %d\n", somarVet(vet, 5));

    return 0;
}