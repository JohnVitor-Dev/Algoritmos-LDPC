#include <stdio.h>

int main() {
    
    int A;
    int multiplicar;

    printf("Digite o valor de A: ");
    scanf("%d", &A);

    multiplicar = A * 2;

    if (multiplicar > 30) {
        
        printf("Multiplicação = %d", multiplicar);
    }

    return 0;
}
