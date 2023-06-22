#include <stdio.h>

int main() {
    float N1, N2, N3, N4, MD;
    
    printf("Digite a primeira nota: ");
    scanf("%f", &N1);
    
    printf("Digite a segunda nota: ");
    scanf("%f", &N2);
    
    printf("Digite a terceira nota: ");
    scanf("%f", &N3);
    
    printf("Digite a quarta nota: ");
    scanf("%f", &N4);
    
    MD = (N1 + N2 + N3 + N4) / 4;
    
    if (MD >= 5) {
        printf("Aprovado\n");
    } else {
        printf("Reprovado\n");
    }
    
    printf("Média: %.2f\n", MD);
    
    return 0;
}
