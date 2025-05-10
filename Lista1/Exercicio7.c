#include <stdio.h>

int main(){
    float valor1, valor2, valor3, media_aritmetica;

    printf("Digite o primeiro valor: ");
    scanf("%f", &valor1);

    printf("Digite o segundo valor: ");
    scanf("%f", &valor2);

    printf("Digite o terceiro valor: ");
    scanf("%f", &valor3);

    media_aritmetica = (valor1 + valor2 + valor3) / 3;

    printf("A media aritmetica e %f", media_aritmetica);


    return 0;
}
