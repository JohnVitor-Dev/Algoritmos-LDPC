#include <stdio.h>

int main() {
    float N1, N2, N3, N4, NE, MD1, MD2;
    
    printf("Digite a primeira nota: ");
    scanf("%f", &N1);
    
    printf("Digite a segunda nota: ");
    scanf("%f", &N2);
    
    printf("Digite a terceira nota: ");
    scanf("%f", &N3);
    
    printf("Digite a quarta nota: ");
    scanf("%f", &N4);
    
    MD1 = (N1 + N2 + N3 + N4) / 4;
    
    printf("Média: %.2f\n", MD1);
    
    if (MD1 >= 7) {
        printf("Aprovado\n");
    } else {
        printf("Digite a nota de exame: ");
        scanf("%f", &NE);
        
        MD2 = (MD1 + NE) / 2;
        
        if (MD2 >= 5) {
            printf("Aprovado em exame\n");
        } else {
            printf("Reprovado\n");
        }
        
        printf("Média: %.2f\n", MD2);
        
    }
    
    return 0;
}
