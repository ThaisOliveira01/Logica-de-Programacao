#include <stdio.h>

int main() {
    float orcamento, valor_servico, total_gasto = 0.0;
    int servico_num = 1;
    int continuar = 1;

    do {
        printf("Digite o valor total do orcamento ( R$100.00): R$ ");
        scanf("%f", &orcamento);
        if (orcamento < 100.0) {
            printf("Valor invalido. O valor deve ser igual ou maior que R$100.00.\n");
        }
    } while (orcamento < 100.0);

    while (continuar) {
        printf("Digite o valor do servico %d: R$ ", servico_num);
        scanf("%f", &valor_servico);

        if (valor_servico + total_gasto > orcamento) {
            printf("Este servico excede o orcamento. Nenhum outro servico podera ser pedido.\n");
            continuar = 0;
        } else {
            total_gasto += valor_servico;
            printf("Servico %d aceito: R$ %.2f\n", servico_num, valor_servico);
            servico_num++;
            if (total_gasto == orcamento) {
                printf("Orcamento totalmente utilizado.\n");
                continuar = 0;
            }
        }
    }

    return 0;
}
