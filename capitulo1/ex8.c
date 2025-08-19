#include <stdio.h>

int main() {
    int inteiro;
    float real;

    printf("Digite um número inteiro: ");
    scanf("%d", &inteiro);

    printf("Digite um número real: ");
    scanf("%f", &real);

    printf("Você digitou o inteiro: %d\n", inteiro);
    printf("Você digitou o real: %.2f\n", real);

    return 0;
}