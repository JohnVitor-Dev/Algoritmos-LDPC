#include <stdio.h>

int main()
{
    
    int A, B, C, R;
    
    printf("Insira o valor de A: \n");
    scanf("%d", &A);
    printf("Insira o valor de B: \n");
    scanf("%d", &B);
    printf("Insira o valor de C: \n");
    scanf("%d", &C);
    
    R = (A + B + C) * (A + B + C);
    
    printf("O quadrado da soma é: %d \n", R);
    
    
    return 0;
}
