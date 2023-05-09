#include <stdio.h>

int main()
{
    
    int AV, BV, CV, NL, BR, TE;
    float VP, AP, BP, CP, NLP, BRP;
    
    printf("Insira o valor de Votos Válidos para A: \n");
    scanf("%d", &AV);
    printf("Insira o valor de Votos Válidos para B: \n");
    scanf("%d", &BV);
    printf("Insira o valor de Votos Válidos para C: \n");
    scanf("%d", &CV);
    printf("Insira o valor de Votos Nulos: \n");
    scanf("%d", &NL);
    printf("Insira o valor de Votos em Branco: \n");
    scanf("%d", &BR);
    
    TE = AV + BV + CV + NL + BR;
    VP = (AV + BV + CV) * 100 / TE;
    AP = AV * 100 / TE;
    BP = BV * 100 / TE;
    CP = CV * 100 / TE;
    NLP = NL * 100 / TE;
    BRP = BR * 100 / TE;
    
    printf("Total de Votos: %d \n", TE);
    printf("Porcentagem de Votos Válidos: %.2f \n", VP);
    printf("Porcentagem de Votos Válidos para A: %.2f \n", AP);
    printf("Porcentagem de Votos Válidos para B: %.2f \n", BP);
    printf("Porcentagem de Votos Válidos para C: %.2f \n", CP);
    printf("Porcentagem de Votos Nulos: %.2f \n", NLP);
    printf("Porcentagem de Votos em Branco: %.2f \n", BRP);
    
    return 0;
}
