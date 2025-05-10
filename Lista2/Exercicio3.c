#include <stdio.h>

int main() {
    float nota;

    printf("Digite uma nota entre 0 e 10: ");
    scanf("%f", &nota);

    while (nota < 0 || nota > 10) {
        printf("Valor invalido! Tente novamente.\n");
        printf("Digite uma nota entre 0 e 10: ");
        scanf("%f", &nota);
    }

    printf("Nota valida: %.2f\n", nota);
    return 0;
}
