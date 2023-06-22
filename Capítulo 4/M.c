#include <stdio.h>

int main() {
    
    char Nome[100];
    char Sexo;

    printf("Digite o nome: ");
    scanf("%s", Nome);
    
    printf("Digite o sexo (M/F): ");
    scanf(" %c", &Sexo);

    if (Sexo == 'M') {
        
        printf("Ilmo. Sr. %s", Nome);
        
        
    } else if(Sexo == 'F') {
        
        printf("Ilma. Sra. %s", Nome);
        
    } else {
        
        printf("Sexo informado inválido");
    }

    return 0;
}
