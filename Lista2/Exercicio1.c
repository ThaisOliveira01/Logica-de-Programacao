#include <stdio.h>

int main() {
    int numero = 0;
    int soma = 0;
    int contador = 0;

    printf("Digite numeros inteiros (numero negativo para parar)\n");


    printf("Numero: ");
    scanf("%d", &numero);

    while (numero >= 0) {
        soma += numero;
        contador++;

        printf("Numero: ");
        scanf("%d", &numero);
    }

    if (contador > 0) {
        float media = (float)soma / contador;
        printf("A media dos numeros digitados e: %.2f\n", media);
    } else {
        printf("Nenhum numero valido foi digitado.\n");
    }

    return 0;
}
