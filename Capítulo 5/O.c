#include <stdio.h>

int main() {
    
    int limite = 10;
    
    for (int i = 1; i <= limite; i++){
        
        int fatorial = 1;
        
        if(i % 2 != 0){
            int valor = i;
            for(int fator = 1; fator <= i; fator++){
                fatorial *= fator;
            }
            
            printf("O fatorial de %d é igual a %d \n", i, fatorial);
            
        }
        
        
        
        
    }
    
    return 0;
    
}
