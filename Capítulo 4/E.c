#include <stdio.h>
#include <math.h>

int main() {
    float A, B, C;
    float delta, x1, x2;
    
    printf("Digite o valor de A: ");
    scanf("%f", &A);
    
    printf("Digite o valor de B: ");
    scanf("%f", &B);
    
    printf("Digite o valor de C: ");
    scanf("%f", &C);
    
    delta = (B * B) - 4 * (A * C);
    
    if (delta < 0) {
        
        printf("Não há solução real.\n");
        
    } else if (delta > 0) {
        
        printf("Há duas soluções reais e diferentes:\n");
        x1 = (-B + sqrt(delta)) / (2 * A);
        x2 = (-B - sqrt(delta)) / (2 * A);
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);

    } else {
        
        printf("Há apenas uma solução real:\n");
        x1 = -B / (2 * A);
        printf("%.2f", x1);
        
    }
    
    return 0;
}
