#include <stdio.h>

int main(){
    int positivos = 0;
    int negativos = 0;
    int num;

    printf("Digite um inteiro (zero para parar): ");
    scanf("%d", &num);

    while(num != 0){
        if(num > 0){
            positivos++;
        }
        else{
            negativos++;
        }
        printf("Digite um inteiro (zero para parar): ");
        scanf("%d", &num);
    }

    printf("Positivos: %d\nNegativos: %d", positivos, negativos);
    return 0;
}
