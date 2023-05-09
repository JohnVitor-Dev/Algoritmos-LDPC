#include <stdio.h>

int main()
{
    
    int A, B, C, D, P, S;
    
    printf("Insira o valor de A: \n");
    scanf("%d", &A);
    printf("Insira o valor de B: \n");
    scanf("%d", &B);
    printf("Insira o valor de C: \n");
    scanf("%d", &C);
    printf("Insira o valor de C: \n");
    scanf("%d", &D);
    
    P = A * C;
    S = B + D;
    
    printf("\nProduto de A e C: %d\nSoma de B e D: %d\n", P, S);
    
    
    return 0;
}
