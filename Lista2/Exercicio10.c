#include <stdio.h>

int main() {
    int a, b, x, y, resto, mdc, mmc;

    do {
        printf("Digite dois numeros inteiros positivos: ");
        scanf("%d %d", &a, &b);
    } while (a <= 0 || b <= 0);

    x = a;
    y = b;

    while (y != 0) {
        resto = x % y;
        x = y;
        y = resto;
    }
    mdc = x;

    mmc = (a * b) / mdc;

    printf("MDC de %d e %d e: %d\n", a, b, mdc);
    printf("MMC de %d e %d e: %d\n", a, b, mmc);

    return 0;
}
