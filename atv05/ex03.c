#include <stdio.h>

void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b;

    printf("Digite dois valores inteiros:\n");
    scanf("%d %d", &a, &b);

    printf("Antes da troca: a = %d, b = %d\n", a, b);
    trocar(&a, &b);
    printf("Apos a troca: a = %d, b = %d\n", a, b);

    return 0;
}