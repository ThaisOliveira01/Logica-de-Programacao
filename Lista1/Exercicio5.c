#include <stdio.h>


int main(){
    float preco_original, desconto, preco_final;

    printf("Qual e o preco do produto? RS ");
    scanf("%f", &preco_original);

    desconto = preco_original * 0.20;
    preco_final = preco_original - desconto;

    printf("--------------- TABELA -------------------- \n");
    printf(" Preco     RS %.2f", preco_original);
    printf("\n Desconto    RS %.2f", desconto);
    printf("\n Valor com Desconto      RS %.2f \n", preco_final);

    printf(" \nVoce ganhou %.2f reais de desconto!!!\n", desconto);





    return 0;
}
