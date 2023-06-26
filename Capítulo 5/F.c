#include <stdio.h>

int main() {
    
    int maximo = 200;

    printf("Valores divisíveis por 4 e menores que 200:\n");

    for (int i = 1; i < maximo; i++) {
        
        if (i % 4 == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}
