#include <stdio.h>

int main() {
    int a, b;

    printf("Digite dois valores inteiros:\n");
    scanf("%d %d", &a, &b);

    int *pA = &a, *pB = &b;

    if (pA > pB) {
        printf("Maior endereco: %p, conteudo: %d\n", (void*)pA, *pA);
    } else {
        printf("Maior endereco: %p, conteudo: %d\n", (void*)pB, *pB);
    }

    return 0;
}