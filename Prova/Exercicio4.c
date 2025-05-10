#include <stdio.h>

int main() {
    int n, i, j;

    printf("Digite um numero maior que 5: ");
    scanf("%d", &n);

    if (n <= 5) {
        printf("Numero invalido. Deve ser maior que 5.\n");
        return 1;
    }

    int meio = n / 2;


    for (j = 0; j < n; j++) {
        printf("x");
    }
    printf("\n");


    for (i = 1; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (j == meio) {
                printf("x");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
