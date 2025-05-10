#include <stdio.h>

int main() {
    int razao, quartoTermo, primeiroTermo, n, soma;

    printf("Digite a razao da PA: ");
    scanf("%d", &razao);

    printf("Digite o quarto termo da PA: ");
    scanf("%d", &quartoTermo);

    printf("Digite o numero de termos (n): ");
    scanf("%d", &n);

    primeiroTermo = quartoTermo - 3 * razao;

    soma = 0;
    for (int i = 0; i < n; i++) {
        int termo = primeiroTermo + i * razao;
        soma += termo;
    }

    printf("A soma dos %d primeiros termos da PA e: %d\n", n, soma);

    return 0;
}
