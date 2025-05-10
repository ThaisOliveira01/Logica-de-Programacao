#include <stdio.h>

int main(){

    char nome[20];
    char sobrenome[20];

    printf("Digite seu nome e sobrenome: ");
    scanf("%s", nome);
    scanf("%s", sobrenome);

    printf("%s %s", nome, sobrenome);
    return 0;
}
