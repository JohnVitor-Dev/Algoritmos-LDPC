#include <stdio.h>

int main() {
    
    int valor, maior = 0, menor = 0;
    int primeiro = 1;
    
    for(valor; valor >= 0;){
        
        printf("Digite um valor positivo inteiro (ou um valor negativo para sair): ");
        scanf("%d", &valor);
        
        if(valor < 0){
            break;
        }
        
        if (valor >= 0) {
            if (primeiro) {
                maior = menor = valor;
                primeiro = 0;
            } else {
                if (valor > maior) {
                    maior = valor;
                }
                if (valor < menor) {
                    menor = valor;
                }
            }
            
        }
    }
    
    printf("O maior valor informado foi: %d\n", maior);
    printf("O menor valor informado foi: %d\n", menor);

    
    return 0;
    
}
