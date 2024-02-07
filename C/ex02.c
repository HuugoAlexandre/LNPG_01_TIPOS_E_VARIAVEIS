#include <stdio.h>
#include <stdlib.h>

int main() {
    char input[20]; // pode aumentar pra ler mais números
    int num;
    char *endptr; 

    printf("Digite o numero: ");
    fgets(input, sizeof(input), stdin); 

    num = strtol(input, &endptr, 10);
    
    if (input[0] != '\n' && *endptr == '\n') {
        if (num % 2 != 0) {
            printf("%d se trata de um numero impar.\n", num);
        } else {
            printf("%d se trata de um numero par.\n", num);
        }
    } else {
        printf("Entrada invalida. Por favor, apenas numeros.\n");
    }

    return 0;
}
