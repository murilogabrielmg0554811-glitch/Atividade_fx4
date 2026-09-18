#include <stdio.h>

int main() {
    int setor;
    int prioridade;

    char *nomeSetor;
    char *nomePrioridade;
    char *atendimentoPrioritario;

    // Menu de setores
    printf("===== SETORES DE ATENDIMENTO =====\n");
    printf("1 - Suporte Tecnico\n");
    printf("2 - Financeiro\n");
    printf("3 - Recursos Humanos\n");
    printf("4 - Comercial\n");
    printf("5 - Desenvolvimento\n");

    printf("\nDigite o setor desejado: ");
    scanf("%d", &setor);

    // Identificação do setor
    switch (setor) {
        case 1:
            nomeSetor = "Suporte Tecnico";
            break;

        case 2:
            nomeSetor = "Financeiro";
            break;

        case 3:
            nomeSetor = "Recursos Humanos";
            break;

        case 4:
            nomeSetor = "Comercial";
            break;

        case 5:
            nomeSetor = "Desenvolvimento";
            break;

        default:
            printf("\nSetor invalido!\n");
            return 1;
    }

    // Menu de prioridades
    printf("\n===== PRIORIDADE =====\n");
    printf("1 - Baixa\n");
    printf("2 - Media\n");
    printf("3 - Alta\n");

    printf("\nDigite a prioridade: ");
    scanf("%d", &prioridade);

    // Classificação da prioridade
    switch (prioridade) {
        case 1:
            nomePrioridade = "Baixa";
            break;

        case 2:
            nomePrioridade = "Media";
            break;

        case 3:
            nomePrioridade = "Alta";
            break;

        default:
            printf("\nPrioridade invalida!\n");
            return 1;
    }

    // Operador ternário
    atendimentoPrioritario = (prioridade == 3) ? "Sim" : "Nao";

    // Exibição dos resultados
    printf("\n===== RESULTADO DO ATENDIMENTO =====\n");
    printf("Setor: %s\n", nomeSetor);
    printf("Prioridade: %s\n", nomePrioridade);
    printf("Atendimento prioritario: %s\n", atendimentoPrioritario);

    return 0;
}