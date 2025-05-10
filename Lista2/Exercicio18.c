#include <stdio.h>

int main() {
    int n;
    float soma = 0.0, media, somaQuadrados = 0.0, desvioPadrao;

    printf("Digite o numero de provas: ");
    scanf("%d", &n);

    float notas[n];

    for (int i = 0; i < n; i++) {
        printf("Digite a nota da prova %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }


    media = soma / n;

    for (int i = 0; i < n; i++) {
        somaQuadrados += (notas[i] - media) * (notas[i] - media);
    }


    desvioPadrao = 0.0;
    for (int i = 0; i < n; i++) {
        desvioPadrao += (notas[i] - media) * (notas[i] - media);
    }
    desvioPadrao = desvioPadrao / n;


    float temp = desvioPadrao;
    for (int i = 0; i < 100; i++) {
        desvioPadrao = 0.5 * (desvioPadrao + temp / desvioPadrao);
    }

    printf("Media das notas: %.2f\n", media);
    printf("Desvio padrao das notas: %.2f\n", desvioPadrao);

    return 0;
}
