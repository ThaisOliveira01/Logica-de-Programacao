#include <stdio.h>


int main(){
    int anoNascimento;
    int ano50;
    int idade2025;

    printf("Qual ano voce nasceu? ");
    scanf("%d", &anoNascimento);

    idade2025 = 2025 - anoNascimento;
    ano50 = idade2025 + 50;

    printf("Em 2025 voce tera %d anos.\n", idade2025);
    printf("Em 50 anos voce tera %d anos.\n", ano50);


    return 0;
}
