#include <stdio.h>

int main()
{
    float Volume, Comprimento, Largura, Altura;
    
    printf("Comprimento: \n");
    scanf("%f", &Comprimento);
    printf("Largura: \n");
    scanf("%f", &Largura);
    printf("Altura: \n");
    scanf("%f", &Altura);

    
    Volume = Comprimento * Largura * Altura;
    
    printf("Valor do Volume: %.2f \n", Volume);

    return 0;
}
