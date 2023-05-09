#include <stdio.h>

int main()
{
    
    float R, A;
    
    printf("Insira o valor do Raio: \n");
    scanf("%f", &R);
    
    A = 3.14159 * (R * R);
    
    
    printf("Área: %.2f\n", A);
    
    
    return 0;
}
