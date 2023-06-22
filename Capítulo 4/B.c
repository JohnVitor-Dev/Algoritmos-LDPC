#include <stdio.h>

int main() {
    int N;
    
    printf("Digite um valor: ");
    scanf("%d", &N);
    
    if (N < 0) {
        N = N * -1;
    }
    
    printf("O valor positivo é: %d\n", N);
    
    return 0;
}
