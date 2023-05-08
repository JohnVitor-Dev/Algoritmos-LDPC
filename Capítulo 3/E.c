#include <stdio.h>

int main() {
    float valor, taxa, tempo, prestacao;

    printf("Digite o valor da prestação em atraso: ");
    scanf("%f", &valor);

    printf("Digite a taxa de juros mensal (em porcentagem): ");
    scanf("%f", &taxa);

    printf("Digite o tempo de atraso (em meses): ");
    scanf("%f", &tempo);

    prestacao = valor + (valor * (taxa / 100) * tempo);

    printf("O valor da prestação em atraso é: R$ %.2f\n", prestacao);

    return 0;
}
