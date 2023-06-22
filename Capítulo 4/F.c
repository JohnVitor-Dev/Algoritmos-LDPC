#include <stdio.h>

int main() {
    int A, B, C, D;
    
    printf("Digite o valor de A: ");
    scanf("%d", &A);
    
    printf("Digite o valor de B: ");
    scanf("%d", &B);
    
    printf("Digite o valor de C: ");
    scanf("%d", &C);
    
    if (A > B) {
        D = A;
        A = B;
        B = D;
    }
    
    if (B > C) {
        D = B;
        B = C;
        C = D;
    }
    
    if (A > B) {
        D = A;
        A = B;
        B = D;
    }
    
    printf("Valores em ordem crescente: %d, %d, %d\n", A, B, C);
    
    return 0;
}
