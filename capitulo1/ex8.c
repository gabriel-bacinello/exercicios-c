#include <stdio.h>

int main() {
    int inteiro;
    float real;

    printf("Digite um numero inteiro: ");
    scanf("%d", &inteiro);

    printf("Digite um numero real: ");
    scanf("%f", &real);

    printf("Voce digitou o inteiro: %d\n", inteiro);
    printf("Voce digitou o real: %.2f\n", real);

    return 0;
}