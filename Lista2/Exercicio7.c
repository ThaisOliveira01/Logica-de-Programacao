#include <stdio.h>

int main() {
    int n, i = 2;
    int a = 0, b = 1, proximo;

    do {
        printf("Digite um numero inteiro positivo: ");
        scanf("%d", &n);
    } while (n <= 0);

    printf("Os %d primeiros numeros da sequencia de Fibonacci!!\n", n);

    if (n >= 1) {
        printf("%d ", a);
    }
    if (n >= 2) {
        printf("%d ", b);
    }

    while (i < n) {
        proximo = a + b;
        printf("%d ", proximo);
        a = b;
        b = proximo;
        i++;
    }

    printf("\n");
    return 0;
}
