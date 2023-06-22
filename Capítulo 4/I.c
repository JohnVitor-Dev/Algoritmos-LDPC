#include <stdio.h>

int main() {
    int A, B, C, D, E;
    int maior, menor;
    
    printf("Digite o valor de A: ");
    scanf("%d", &A);
    
    printf("Digite o valor de B: ");
    scanf("%d", &B);
    
    printf("Digite o valor de C: ");
    scanf("%d", &C);
    
    printf("Digite o valor de D: ");
    scanf("%d", &D);
    
    printf("Digite o valor de E: ");
    scanf("%d", &E);
    
    menor = A;
    
    if (A > maior) {
        maior = A;
    }
    
    if (B > maior) {
        maior = B;
    } else if (B < menor) {
        menor = B;
    }
    
    if (C > maior) {
        maior = C;
    } else if (C < menor) {
        menor = C;
    }
    
    if (D > maior) {
        maior = D;
    } else if (D < menor) {
        menor = D;
    }
    
    if (E > maior) {
        maior = E;
    } else if (E < menor) {
        menor = E;
    }
    
    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
    
    return 0;
}
