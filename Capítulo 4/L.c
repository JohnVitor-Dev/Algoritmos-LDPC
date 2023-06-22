#include <stdio.h>

int main() {
    int Num;

    printf("Digite um valor inteiro: ");
    scanf("%d", &Num);

    if (!(Num > 3)) {
        
        printf("O valor digitado é: %d\n", Num);
    }

    return 0;
}
