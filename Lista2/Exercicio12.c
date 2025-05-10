#include <stdio.h>

int main() {
    int razao, terceiroTermo, primeiroTermo, n, termo;

    printf("Digite a razao da PA: ");
    scanf("%d", &razao);

    printf("Digite o terceiro termo da PA: ");
    scanf("%d", &terceiroTermo);

    printf("Digite o numero de termos (n): ");
    scanf("%d", &n);

    if (n <= 3) {
        printf("O numero de termos (n) deve ser maior do que 3.\n");
        return 1;
    }

    primeiroTermo = terceiroTermo - 2 * razao;

    printf("Os %d primeiros termos da PA sao:\n", n);

    for (int i = 0; i < n; i++) {
        termo = primeiroTermo + i * razao;
        printf("%d ", termo);
    }

    return 0;
}
