#include <stdio.h>
#include <math.h>


int main(){
    float valor1, valor2, valor3, valor4, media_aritmetica, media_geometrica, media_harmonica;

    printf("Digite quatro valores positivos: ");
    scanf("%f %f %f %f", &valor1, &valor2, &valor3, &valor4);

    media_aritmetica = (valor1 + valor2 + valor3 + valor4) / 4;
    media_geometrica = pow(valor1 * valor2 * valor3 * valor4, 1.0 / 4.0);
    media_harmonica = 4.0 / ((1.0 / valor1) + (1.0 / valor2) + (1.0 / valor3) + (1.0 / valor4));



    printf("\nA media aritmetica e %.2f\n", media_aritmetica);
    printf("A media geometrica e %.2f\n", media_geometrica);
    printf("A media harmonica e %.2f\n", media_harmonica);



    return 0;
}
