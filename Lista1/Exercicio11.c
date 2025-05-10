#include <stdio.h>

int main(){
    int num1, num2, num3, crescente;

    printf("Digite tres numeros inteiros: ");
    scanf("%d %d %d", &num1, &num2, &num3);


    if(num1 > num2){
        crescente = num1; num1 = num2; num2 = crescente;
    }
    if(num1 > num3){
        crescente = num1; num1 = num3; num3 = crescente;
    }
    if(num2 > num3);{
        crescente = num2; num2 = num3; num3 = crescente;
}


    printf("A ordem crescente: %d %d %d\n", num1, num2, num3);


    return 0;
}
