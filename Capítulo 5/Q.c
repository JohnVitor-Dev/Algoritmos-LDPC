#include <stdio.h>

int main() {
    
    float area_total = 0;
    char resposta;
    
    char nome[100];
    float largura, comprimento;
    
    for(int i = 1; i > 0; i++){
        
        //system("clear");
        
        printf("Digite o nome do cômodo: ");
        scanf("%s", nome);
    
        printf("Digite a largura do cômodo em metros: ");
        scanf("%f", &largura);
    
        printf("Digite o comprimento do cômodo em metros: ");
        scanf("%f", &comprimento);
    
        float area = largura * comprimento;
        printf("A área do cômodo %s é: %.2f metros quadrados\n", nome, area);
        
        area_total += area;
        
        printf("Deseja calcular a área de mais um cômodo? (S/N): ");
        scanf(" %c", &resposta);
        
        if(resposta == 'N' || resposta == 'n'){
            break;
        }
    }
    
    printf("\nA área total da residência é: %.2f metros quadrados\n", area_total);
    
    return 0;
    
}
