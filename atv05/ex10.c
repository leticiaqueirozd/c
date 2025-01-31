// A instrução scanf("%d", *px); está incorreta. 
// O correto seria scanf("%d", px);
// pois scanf espera um ponteiro para a variável onde o valor será armazenado. 
// *px é o conteúdo, não o endereço.

#include <stdio.h>

int main() {
    int x;
    int *px = &x; // px armazena o endereço de x

    printf("Digite um valor inteiro:\n");
    scanf("%d", px); // passa o endereço de x

    printf("Valor digitado: %d\n", x);

    return 0;
}

