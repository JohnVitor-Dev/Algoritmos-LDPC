#include <stdio.h>

int main() {

    int Quadrados = 64;
    double Soma = 0;
    double Graos = 1;
    
  
    for (int i = 1; i <= 64; i++) {
        
        Soma += Graos;
        Graos = Graos * 2;
        
    }
    
    printf("A soma é = %.1lf", Soma);

    return 0;
}
