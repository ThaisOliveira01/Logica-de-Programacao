#include <stdio.h>

int main(){
    char unidade;
    float temperatura, convertido;

    printf("A temperatura esta em Celsius ou Fahrenheit? (C|F): ");
    scanf("%c", &unidade);

    if(unidade == 'C' || unidade == 'c') {
        printf("Digite a temperatura em Celsius: ");
        scanf("%f, &temperatura");
        convertido = (9.0 / 5.0)* temperatura + 32;
        printf("Temperatura em Fahrenheit: %.2f°F\n", convertido);
    }else if(unidade == 'F' || unidade == 'f'){
        printf("Digite a temperatura em Fahrenheit: ");
        scanf("%f", &temperatura);
        convertido = (5.0 / 9.0) * (temperatura - 32);
        printf("Temperatura em Celsius: %.2f°c\n", convertido);
    } else {
        printf("Unidade invalida. Use 'C' para Celsius ou 'F' para Fahrenheit.\n");
    }

    return 0;
}
