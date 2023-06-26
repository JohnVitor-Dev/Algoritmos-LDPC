#include <stdio.h>

int main() {
    
    int Quant_Valores = 10;
    int valores[Quant_Valores];
    int somatorio = 0;
    

    printf("Digite 10 numeros inteiros:\n");

    for (int i = 0; i < Quant_Valores; i++) {
        scanf("%d", &valores[i]);
    }
    
    for(int i = 0; i < Quant_Valores; i++){
        
        somatorio += valores[i];
    }

    int media = somatorio / Quant_Valores;
    
    printf("A soma dos valores é = %d e a média é = %d", somatorio, media);
    
    return 0;
    
}
