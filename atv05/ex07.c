#include <stdio.h>

void encontrarMinMax(int *V, int *min, int *max, int tamanho) {
    *min = *max = *V;
    for (int i = 0; i < tamanho; i++) {
        if (*(V + i) < *min) *min = *(V + i);
        if (*(V + i) > *max) *max = *(V + i);
    }
}

int main() {
    int V[] = {5, 2, 9, 1, 7};
    int min, max;

    encontrarMinMax(V, &min, &max, 5);
    printf("Minimo: %d, Maximo: %d\n", min, max);

    return 0;
}