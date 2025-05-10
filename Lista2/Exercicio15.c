#include <stdio.h>

int main() {
    int razao = -2;
    int a1 = 1;
    int n = 5;
    int i;
    int soma = 0;

    printf("Digite o primeiro termo da PG: ");
    scanf("%d", &a1);

    printf("Digite a razao da PG: ");
    scanf("%d", &razao);

    printf("Digite o numero de termos da PG: ");
    scanf("%d", &n);

    printf("Os primeiros %d termos da PG sao:\n", n);
    for(i = 1; i <= n; i++) {
        printf("%d ", a1);
        soma += a1;
        a1 = a1 * razao;
    }

    printf("\nA soma dos %d primeiros termos da PG e: %d\n", n, soma);

    return 0;
}
