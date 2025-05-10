#include <stdio.h>

int main() {
    int primeiroTermo, razao, n, termo;

    printf("Digite o primeiro termo da PA: ");
    scanf("%d", &primeiroTermo);

    printf("Digite a razao da PA: ");
    scanf("%d", &razao);

    printf("Digite o numero de termos (n): ");
    scanf("%d", &n);

    printf("Os %d primeiros termos da PA sao:\n", n);

    for (int i = 0; i < n; i++) {
        termo = primeiroTermo + i * razao;
        printf("%d ", termo);
    }

    return 0;
}
