#include <stdio.h>

int main() {
    int numero, i = 2, eh_primo = 1;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero <= 1) {
        eh_primo = 0;
    } else {
        while (i <= numero / 2 && eh_primo == 1) {
            if (numero % i == 0) {
                eh_primo = 0;
            }
            i++;
        }
    }

    if (eh_primo) {
        printf("%d e um numero primo.\n", numero);
    } else {
        printf("%d nao e um numero primo.\n", numero);
    }

    return 0;
}
