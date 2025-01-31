#include <stdio.h>

int main() {
    int array[3] = {10, 20, 30};

    array[0] = 100;

    int *p = array;
    *(p + 1) = 200;

    *(array + 2) = 300;

    for (int i = 0; i < 3; i++) {
        printf("array[%d] = %d\n", i, array[i]);
    }

    return 0;
}