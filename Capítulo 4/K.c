#include <stdio.h>

int main() {
    
    int Num;
    
    printf("Digite um valor inteiro: ");
    scanf("%d", &Num);
    
    if(Num >= 1 && Num <= 9)
    {
        printf("O valor está na faixa permitida");
        
    } else
    {
        printf("O valor está fora da faixa permitida");
    }
    
    return 0;
}
