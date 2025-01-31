#include <stdio.h>

int main() {
    int array[5];

    printf("Digite 5 valores inteiros:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", array + i);
    }

    printf("Dobro dos valores:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\n", *(array + i) * 2);
    }

    return 0;
}