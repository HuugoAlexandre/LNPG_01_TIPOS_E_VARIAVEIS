#include <stdio.h>
#include <stdlib.h>

int main() {
    float celsius, fahrenheit;
    char input[50];
    char *endptr;

    printf("Digite a temperatura em Celsius: ");
    fgets(input, sizeof(input), stdin);
    celsius = strtof(input, &endptr);

    if (input[0] == '\n' || *endptr != '\n') {
        printf("Entrada invalida. Por favor, digite uma temperatura valida em Celsius.\n");
        return 1;
    }

    fahrenheit = celsius * 1.8 + 32;

    printf("%.2f Celsius equivale a %.2f Fahrenheit\n", celsius, fahrenheit);

    return 0;
}
