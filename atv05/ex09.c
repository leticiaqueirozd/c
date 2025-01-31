#include <stdio.h>

void copiarString(char *copiarDaqui, char *colarAqui) {
    while ((*colarAqui = *copiarDaqui) != '\0') {
        copiarDaqui++;
        colarAqui++;
    }
}

int main() {
    char s1[] = "Ponteiros em C";
    char s2[20];

    copiarString(s1, s2);
    printf("%s\n", s2);

    return 0;
}