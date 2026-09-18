#include <stdio.h>

int main() {
    int idade;
    float renda, valorSolicitado;
    char *situacao;
    char *apto;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    printf("Digite a renda mensal: R$ ");
    scanf("%f", &renda);

    printf("Digite o valor solicitado: R$ ");
    scanf("%f", &valorSolicitado);

    // Análise da situação do crédito
    if (idade < 18) {
        situacao = "Credito nao permitido";
    } else if (renda < 2000.00) {
        situacao = "Credito nao recomendado";
    } else if (renda < 5000.00) {
        situacao = "Analise adicional";
    } else {
        situacao = "Credito pre-aprovado";
    }

    // Operador ternário
    apto = (idade >= 18 && renda >= 2000.00) ? "Sim" : "Nao";

    // Exibição dos resultados
    printf("\n===== ANALISE DE CREDITO =====\n");
    printf("Idade: %d anos\n", idade);
    printf("Renda mensal: R$ %.2f\n", renda);
    printf("Valor solicitado: R$ %.2f\n", valorSolicitado);
    printf("Situacao: %s\n", situacao);
    printf("Cliente apto para prosseguir? %s\n", apto);

    return 0;
}