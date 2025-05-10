#include <stdio.h>


int main(){
    float preco_original, percentual_desconto, desconto, preco_final;

    printf("Qual e o preco do produto? RS ");
    scanf("%f", &preco_original);

    printf("Digite a porcentagem de desconto (20/20%%): ");
    scanf("%f", &percentual_desconto);

    desconto = preco_original * percentual_desconto / 100;
    preco_final = preco_original - desconto;

    printf("--------------- TABELA -------------------- \n");
    printf(" Preco     RS %.2f", preco_original);
    printf("\n Desconto    RS %.2f", desconto);
    printf("\n Valor com Desconto      RS %.2f \n", preco_final);

    printf(" \nVoce ganhou %.2f de desconto!!!\n", desconto);


    return 0;
}
