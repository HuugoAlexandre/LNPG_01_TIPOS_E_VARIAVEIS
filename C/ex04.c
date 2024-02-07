#include <stdio.h>
#include <stdlib.h>

int main() {
    int idade;
    char input[20]; // talvez grande demais, porém deixei assim
    char *endptr;

    printf("Digite sua idade: ");
    fgets(input, sizeof(input), stdin);
    idade = strtol(input, &endptr, 10);

    if (input[0] == '\n' || *endptr != '\n' || idade < 0) {
        printf("Entrada invalida. Por favor, insira um numero inteiro positivo.\n");
        return 1;
    }

    if (idade < 18) {
        printf("Menor de idade!\n");
    } else {
        printf("Maior de idade!\n");
    }

    return 0;
}
