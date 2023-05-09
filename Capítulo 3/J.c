#include <stdio.h>

int main()
{
    int A, B, R;
    
    
    printf("Digite o valor de A: \n");
    scanf("%d", &A);
    printf("Digite o valor de B: \n");
    scanf("%d", &B);
    
    R = (A - B) * (A - B); 
    
    printf("Valor da diferença entre A e B elevado ao quadrado: %d \n", R);

    return 0;
}
