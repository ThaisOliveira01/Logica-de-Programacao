#include <stdio.h>

int main() {
    int base, expoente, resultado = 1, contador = 0;

    do {
        printf("Digite a base (positivo): ");
        scanf("%d", &base);
    } while (base <= 0);

    do {
        printf("Digite o expoente (positivo): ");
        scanf("%d", &expoente);
    } while (expoente < 0);


    while (contador < expoente) {
        resultado *= base;
        contador++;
    }

    printf("%d elevado a %d e igual a %d\n", base, expoente, resultado);

    return 0;
}
