#include <stdio.h>

int main() {

    int Atual = 0;
    int Anterior = 0;
    int Proximo = 1;
    int limite = 15;
    
  

    for (int i = 1; i <= limite; i++) {
        printf("%d\n", Atual);
        
        Anterior = Atual;
        Atual = Proximo;
        Proximo = Atual + Anterior;
        
    }

    return 0;
}
