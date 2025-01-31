#include <stdio.h>

void parImpar(int num) {
    if (num % 2 == 0) {
        printf("%d é par.\n", num);
    } else {
        printf("%d é ímpar.\n", num);
    }
}

int main() {
    int num;

    printf("Insira um número:\n");
    scanf("%d", &num);

    parImpar(num);

    return 0;
}