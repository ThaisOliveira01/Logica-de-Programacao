#include <stdio.h>

int main(){
    int n;
    int fat = 1;
    int i;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    for(i = n; i > 0; i--){
        fat = fat * i;
        printf("%d %d\n",i, fat);
    }

}
