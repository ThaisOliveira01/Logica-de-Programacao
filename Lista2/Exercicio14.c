#include <stdio.h>

int main(){
    int razao = -2;
    int a1 = 1;
    int n = 5;
    int i;

    printf("Digite o primeiro termo da PG: ");
    scanf("%d", &a1);

    printf("Digite a razao da PG: ");
    scanf("%d", &razao);

    printf("Digite numero de termos da PG: ");
    scanf("%d", &n);


    for(i = 1; i <= n; i++){
        printf("%d ", a1);
        a1 = a1 * razao;
    }

    return 0;
}
