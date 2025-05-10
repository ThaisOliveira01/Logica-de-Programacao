#include <stdio.h>

int main() {
    char sexo;
    float peso, altura, tmb;
    int idade;

    printf("Digite seu sexo (M para masculino, F para feminino): ");
    scanf(" %c", &sexo);

    printf("Digite seu peso em kg: ");
    scanf("%f", &peso);

    printf("Digite sua altura em cm: ");
    scanf("%f", &altura);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (sexo == 'M' || sexo == 'm') {
        tmb = 66.47 + (13.75 * peso) + (5.00 * altura) - (6.76 * idade);
    } else if (sexo == 'F' || sexo == 'f') {
        tmb = 655.1 + (9.56 * peso) + (1.85 * altura) - (4.68 * idade);
    } else {
        printf("Sexo invalido!\n");
        return 1;
    }

    printf("Sua Taxa Metabolica Basal (TMB) e: %.2f calorias\n", tmb);

    return 0;
}
