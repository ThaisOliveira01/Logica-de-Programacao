#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    printf("Tabuada do %d:\n", numero);

    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}



// Sim, poderia usar o while, pois a repeti��o de 1 a 10 � previs�vel e control�vel com uma vari�vel de controle.
