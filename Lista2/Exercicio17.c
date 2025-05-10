#include <stdio.h>

int main(){
    float C, M, Mc, i;
    int n, j;

    C = 100.0;
    i = 0.01;
    n = 12 * 5;
    M = C;
    Mc = C;
    printf("M = R$ %.2f    Mc = R$ %.2f\n",M, Mc);
    for(j = 1; j <= n; j++){
        M = j*C + C*i*(1 + j)*j/2 + C;
        Mc = Mc * (1 + i) + C;
        printf("M = R$ %.2f    Mc = R$ %.2f\n",M, Mc);
    }



    return 0;
}
