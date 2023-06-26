#include <stdio.h>

int main() {
    
    int Quant_Valores = 15;
    int valores[Quant_Valores];
    int somatorio = 0;

    printf("Digite 15 numeros inteiros:\n");

    for (int i = 0; i < Quant_Valores; i++) {
        scanf("%d", &valores[i]);
    }

    for (int i = 0; i < Quant_Valores; i++) {
        
        int numero = valores[i];
        int fatorial = 1;

        for (int i = 1; i <= numero; i++) {
            fatorial *= i;
        }
        
        somatorio += fatorial;
    }

    printf("O somatório da fatorial de cada valor é: %d\n", somatorio);

    return 0;
}
