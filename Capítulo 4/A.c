#include <stdio.h>

int main() {
    int A, B;
    
    printf("Digite o valor de A: ");
    scanf("%d", &A);
    
    printf("Digite o valor de B: ");
    scanf("%d", &B);
    
    if (A > B) {
        printf("A diferenca entre o maior e o menor valor é: %d\n", A - B);
    } else {
        printf("A diferenca entre o maior e o menor valor é: %d\n", B - A);
    }
    
    return 0;
}
