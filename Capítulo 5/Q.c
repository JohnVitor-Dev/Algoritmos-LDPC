#include <stdio.h>

int main() {
    
    float area_total = 0;
    char resposta;
    
    char nome[100];
    float largura, comprimento;
    
    for(int i = 1; i > 0; i++){
        
        //system("clear");
        
        printf("Digite o nome do c�modo: ");
        scanf("%s", nome);
    
        printf("Digite a largura do c�modo em metros: ");
        scanf("%f", &largura);
    
        printf("Digite o comprimento do c�modo em metros: ");
        scanf("%f", &comprimento);
    
        float area = largura * comprimento;
        printf("A �rea do c�modo %s �: %.2f metros quadrados\n", nome, area);
        
        area_total += area;
        
        printf("Deseja calcular a �rea de mais um c�modo? (S/N): ");
        scanf(" %c", &resposta);
        
        if(resposta == 'N' || resposta == 'n'){
            break;
        }
    }
    
    printf("\nA �rea total da resid�ncia �: %.2f metros quadrados\n", area_total);
    
    return 0;
    
}
