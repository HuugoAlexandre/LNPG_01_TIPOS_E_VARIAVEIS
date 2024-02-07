#include <stdio.h>
#include <stdlib.h>

int main() {
    float num1, num2, soma, sub, div, multi;
    char input[100];
    char *endptr;

    printf("Digite o 1o numero: ");
    fgets(input, sizeof(input), stdin);
    num1 = strtof(input, &endptr);

    if (input[0] == '\n' || *endptr != '\n') {
        printf("Entrada invalida para o primeiro numero. Por favor, digite um numero valido.\n");
        return 1;
    }

    printf("Digite o 2o numero: ");
    fgets(input, sizeof(input), stdin);
    num2 = strtof(input, &endptr);

    if (input[0] == '\n' || *endptr != '\n') {
        printf("Entrada invalida para o segundo numero. Por favor, digite um numero valido.\n");
        return 1;
    }

    if (num2 == 0) {
        printf("Impossivel dividir por zero.\n");
        return 1;
    }

    soma = num1 + num2;
    sub = num1 - num2;
    div = num1 / num2;
    multi = num1 * num2;

    printf("Soma: %.2f\n", soma);
    printf("Subtracao: %.2f\n", sub);
    printf("Divisao: %.2f\n", div);
    printf("Multiplicacao: %.2f\n", multi);

    return 0;
}
