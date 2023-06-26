#include <stdio.h>

int main() {
    
    int maximo = 100;
    int soma = 0;

    for (int i = 1; i <= maximo; i++) {
        
        soma += i;
    }

    printf("A soma dos cem primeiros números naturais é: %d\n", soma);

    return 0;
}
