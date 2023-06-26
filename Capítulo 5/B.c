#include <stdio.h>

int main() {
    
    int numero, r;

    printf("Digite um número: ");
    scanf("%d", &numero);

    printf("\nTabuada de multiplicação de %d:\n", numero);

    for (int i = 1; i <= 10; i++) {
        r = numero * i;
        printf("%d x %d = %d\n", numero, i, r);
    }

    return 0;
}
