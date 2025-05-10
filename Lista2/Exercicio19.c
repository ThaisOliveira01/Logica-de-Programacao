#include <stdio.h>

int main(){
    int decimal;
    int binario = 0, resto;
    int temp, cont = 0;
    int pot = 1;

    decimal = 95;
    temp = decimal;

    while(decimal > 0){
        resto = decimal % 2;

        binario = binario + resto * pot;
        pot = pot * 10;
        decimal = decimal / 2;
    }
    printf("%d_10 = %d_2", temp, binario);

    return 0;

}
