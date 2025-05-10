#include <stdio.h>
#include <math.h>

int main() {
    float x1, x2, x3, x4;
    float media, variancia, desvio;


    printf("Digite quatro numeros reais:\n");
    scanf("%f %f %f %f", &x1, &x2, &x3, &x4);


    media = (x1 + x2 + x3 + x4) / 4.0;


    variancia = (
        (x1 - media) * (x1 - media) +
        (x2 - media) * (x2 - media) +
        (x3 - media) * (x3 - media) +
        (x4 - media) * (x4 - media)
    ) / 4.0;


    desvio = sqrt(variancia);


    printf("\nMedia: %.2f\n", media);
    printf("Variancia: %.2f\n", variancia);
    printf("Desvio padrao: %.2f\n", desvio);

    return 0;
}
