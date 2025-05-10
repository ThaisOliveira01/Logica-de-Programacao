#include <stdio.h>

int main() {
    int m, n, a, b;
    int divisor = 2, mmc = 1, mdc = 1;

    printf("Digite dois numeros inteiros positivos:\n");
    scanf("%d %d", &m, &n);

    a = m;
    b = n;

    printf("\nEtapas da fatoracao para MMC:\n");

    while (a > 1 || b > 1) {
        if (a % divisor == 0 || b % divisor == 0) {
            printf("%d %d | %d\n", a, b, divisor);

            if (a % divisor == 0 && b % divisor == 0)
                mdc *= divisor;

            if (a % divisor == 0)
                a /= divisor;
            if (b % divisor == 0)
                b /= divisor;

            mmc *= divisor;
        } else {
            divisor++;
        }
    }

    printf("1 1\n");
    printf("\nO MMC de %d e %d vale %d e o MDC vale %d.\n", m, n, mmc, mdc);

    return 0;
}
