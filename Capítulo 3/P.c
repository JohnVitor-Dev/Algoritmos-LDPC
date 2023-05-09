#include <stdio.h>

int main()
{
    
    float SM, PR, NS;
    
    printf("Insira o valor do Salário Mensal: \n");
    scanf("%f", &SM);
    printf("Insira o valor do percentual de reajuste: \n");
    scanf("%f", &PR);
    

    
    NS = SM + SM * PR / 100;
    
    
    printf("Novo Salário: %.2f\n", NS);
    
    
    return 0;
}
