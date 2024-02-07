#include <stdio.h>

int main(){
    int i;
    float peso_final, nota_final, nota, peso;
    peso_final = 0;
    nota_final = 0;

    for(i=0; i<=2;i++){
        printf("Digite a nota: ");
        scanf("%f", &nota);
        printf("Digite o peso: ");
        scanf("%f", &peso);

        peso_final = peso_final + peso;
        nota_final = nota_final + (peso * nota);
    }

    printf("A media ponderada foi: %.2f", nota_final/peso_final);
    return 0;
}