#include <stdio.h>

int main()
{
    int A, B, C, D;
    int A1, A2, A3, A4, A5, A6;
    int M1, M2, M3, M4, M5, M6;
    
    printf("Insira o valor de A, B, C e D, dando enter depois de colocar o valor de um: \n");
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    scanf("%d", &D);
    
    A1 = A + B;
    A2 = A + C;
    A3 = A + D;
    A4 = B + C;
    A5 = B + D;
    A6 = C + D;
    M1 = A * B;
    M2 = A * C;
    M3 = A * D;
    M4 = B * C;
    M5 = B * D;
    M6 = C * D;
    
    printf("Valores da Adição: %d %d %d %d %d %d \n", A1, A2, A3, A4, A5, A6);
    printf("Valores da Multiplicação: %d %d %d %d %d %d", M1, M2, M3, M4, M5, M6);

    return 0;
}
