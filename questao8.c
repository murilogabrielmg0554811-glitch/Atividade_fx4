#include <stdio.h>

int main() {
    float valorCompra;
    float percentualDesconto;
    float valorDesconto;
    float valorFinal;
    int pagamento;
    char *formaPagamento;

    printf("Digite o valor da compra: R$ ");
    scanf("%f", &valorCompra);

    printf("\n===== FORMAS DE PAGAMENTO =====\n");
    printf("1 - PIX\n");
    printf("2 - Debito\n");
    printf("3 - Credito\n");
    printf("4 - Boleto\n");

    printf("\nDigite a forma de pagamento: ");
    scanf("%d", &pagamento);

    // Identifica a forma de pagamento e o desconto
    switch (pagamento) {
        case 1:
            formaPagamento = "PIX";
            percentualDesconto = 20;
            break;

        case 2:
            formaPagamento = "Debito";
            percentualDesconto = 15;
            break;

        case 3:
            formaPagamento = "Credito";
            percentualDesconto = 5;
            break;

        case 4:
            formaPagamento = "Boleto";
            percentualDesconto = 10;
            break;

        default:
            printf("Forma de pagamento invalida!\n");
            return 1;
    }

    // Calcula o desconto e o valor final
    valorDesconto = valorCompra * percentualDesconto / 100;
    valorFinal = valorCompra - valorDesconto;

    // Exibe os resultados
    printf("\n===== RESUMO DA COMPRA =====\n");
    printf("Forma de pagamento: %s\n", formaPagamento);
    printf("Valor da compra: R$ %.2f\n", valorCompra);
    printf("Percentual de desconto: %.0f%%\n", percentualDesconto);
    printf("Valor do desconto: R$ %.2f\n", valorDesconto);
    printf("Valor final: R$ %.2f\n", valorFinal);

    return 0;
}