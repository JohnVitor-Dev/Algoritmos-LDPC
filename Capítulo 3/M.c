#include <stdio.h>

int main()
{
    
    int A, B, C, R, Aq, Bq, Cq;
    
    printf("Insira o valor de A: \n");
    scanf("%d", &A);
    printf("Insira o valor de B: \n");
    scanf("%d", &B);
    printf("Insira o valor de C: \n");
    scanf("%d", &C);
    
    Aq = A * A;
    Bq = B * B;
    Cq = C * C;
    R = Aq + Bq + Cq;
    
    printf("A soma dos quadrados é: %d \n", R);
    
    
    return 0;
}
