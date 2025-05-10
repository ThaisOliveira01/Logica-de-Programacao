#include <stdio.h>

int dias_por_mes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int dia_do_ano(int dia, int mes) {
    int total = 0;
    for(int i = 0; i < mes - 1; i++) {
        total += dias_por_mes[i];
    }
    total += dia;
    return total;
}

int main() {
    int dia_hoje, mes_hoje;
    int dia_aniversario, mes_aniversario;

    printf("Informe que dia e hoje:");
    scanf("%d", &dia_hoje);
    printf("E o mes: ");
    scanf("%d", &mes_hoje);

    printf("\nInforme que dia e o seu aniversario:");
    scanf("%d", &dia_aniversario);
    printf("E o mes: ");
    scanf("%d", &mes_aniversario);

    int hoje = dia_do_ano(dia_hoje, mes_hoje);
    int aniversario = dia_do_ano(dia_aniversario, mes_aniversario);

    if (hoje == aniversario) {
        printf("\nParabens! Hoje e seu aniversario!\n");
    } else if (hoje < aniversario) {
        int faltam = aniversario - hoje;
        printf("\nFaltam %d dias para o seu aniversario.\n", faltam);
    } else {
        int passaram = hoje - aniversario;
        printf("\nSe passaram %d dias desde o seu aniversario.\n", passaram);
    }

    return 0;
}
