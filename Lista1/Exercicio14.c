#include <stdio.h>

int main(){
    int tab;
	int i;

	printf("Digite um numero inteiro: ");
	scanf("%d", &tab);


	for(i = 1; i <= 10; i++){
		printf("%d x %2d = %3d\n", tab, i, tab * i);
	}


    return 0;
}
