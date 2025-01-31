#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media;

    printf("Informe três notas, em sequência:\n");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    media = (nota1 + nota2 + nota3) / 3;
    printf("Média aritmética: %.1f\n", media);

    return 0;
}