#include <stdio.h>

int main() {
    
    int Num;
    
    printf("Digite um valor inteiro: ");
    scanf("%d", &Num);
    
    if(Num % 2 == 0)
    {
        printf("%d é par", Num);
        
    } else
    {
        printf("%d é impar", Num);
    }
    
    return 0;
}
