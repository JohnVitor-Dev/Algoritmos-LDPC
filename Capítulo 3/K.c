#include <stdio.h>

int main()
{
    float R, US, COTACAO;
    
    printf("Digite o valor de Dólares: \n");
    scanf("%f", &US);
    printf("Digite o valor da Cotação: \n");
    scanf("%f", &COTACAO);
    
    R = US * COTACAO;
    
    printf("Valor em Dólar convertido para Real: %.2f \n", R);

    return 0;
}
