#include <stdio.h>

int main() {
    
    int limite = 70;
    int totalNumeros = 0;
    int soma = 0;
    
    printf("Numeros pares: \n");
    
    for (int i = 50; i <= limite; i++){
    
        if(i % 2 == 0){
          printf("%d \n", i);
          totalNumeros += 1;
          soma += i;
            
        }
    }
    
    int media = soma / totalNumeros;
    
    printf("\nA soma dos n�meros pares � igual a %d \n", soma);
    printf("A m�dia da soma � igual a %d \n", media);
    printf("O total de n�meros pares � igual a %d \n", totalNumeros);
    
    return 0;
    
}
