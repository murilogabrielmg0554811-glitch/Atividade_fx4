#include <stdio.h>

int main() {
    float valorCompra;
    float percentualDesconto;
    float valorDesconto;
    float valorFinal;

    printf("Digite o valor da compra: R$ ");
    scanf("%f", &valorCompra);

    // Verifica o percentual de desconto
    if (valorCompra <= 500.00) {
        percentualDesconto = 0;
    } else if (valorCompra <= 1000.00) {
        percentualDesconto = 5;
    } else if (valorCompra <= 2000.00) {
        percentualDesconto = 10;
    } else {
        percentualDesconto = 15;
    }

    // Calcula o valor do desconto
    valorDesconto = valorCompra * percentualDesconto / 100;

    // Calcula o valor final
    valorFinal = valorCompra - valorDesconto;

    // Exibe os resultados
    printf("\n===== RESUMO DA COMPRA =====\n");
    printf("Valor original: R$ %.2f\n", valorCompra);
    printf("Percentual de desconto: %.0f%%\n", percentualDesconto);
    printf("Valor do desconto: R$ %.2f\n", valorDesconto);
    printf("Valor final da compra: R$ %.2f\n", valorFinal);

    return 0;
}