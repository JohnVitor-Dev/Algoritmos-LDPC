#include <stdio.h>

int main() {
    
    for (int i = 15; i <= 200; i += 3) {
        
        int quadrado = i * i;
        
        printf("O quadrado de %d é: %d\n", i, quadrado);
    }
    
    return 0;
}
