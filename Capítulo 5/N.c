#include <stdio.h>

int main() {
    
    int valor;
    float media;
    int soma = 0;
    int lidos = 0;

    for (int i = 1; i > 0; i++) {
        
        scanf("%d", &valor);
        
        if(valor < 0){
            break;
        }
        
        lidos += 1;
        soma += valor;
    }
    
    media = soma / lidos;
    
    printf("Somatório: %d\n", soma);
    printf("Média: %.2f\n", media);
    printf("Total de valores lidos: %d\n", lidos);
    
    return 0;
    
}
