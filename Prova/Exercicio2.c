#include <stdio.h>

int main() {
    int numero;
    int positivos = 0;
    int negativos = 0;

    do {
        printf("Digite um numero (0 para): ");
        scanf("%d", &numero);

        if (numero > 0) {
            positivos++;
        } else if (numero < 0) {
            negativos++;
        }

    } while (numero != 0);

    printf("\nTotal de numeros positivos: %d\n", positivos);
    printf("Total de numeros negativos: %d\n", negativos);

    if (positivos > negativos) {
        printf("Foram digitados mais numeros positivos.\n");
    } else if (negativos > positivos) {
        printf("Foram digitados mais numeros negativos.\n");
    } else {
        printf("Foram digitados a mesma quantidade de numeros positivos e negativos.\n");
    }

    return 0;
}
