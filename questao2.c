#include <stdio.h>

int main() {
    int opcao;

    printf("===== MENU DE ATENDIMENTO =====\n");
    printf("1 - Saldo\n");
    printf("2 - Extrato\n");
    printf("3 - Transferencia\n");
    printf("4 - Pagamento\n");
    printf("5 - Emprestimo\n");
    printf("6 - Encerrar\n");

    printf("\nDigite uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Voce selecionou: Saldo.\n");
            break;

        case 2:
            printf("Voce selecionou: Extrato.\n");
            break;

        case 3:
            printf("Voce selecionou: Transferencia.\n");
            break;

        case 4:
            printf("Voce selecionou: Pagamento.\n");
            break;

        case 5:
            printf("Voce selecionou: Emprestimo.\n");
            break;

        case 6:
            printf("Atendimento encerrado. Obrigado por utilizar nossos servicos!\n");
            break;

        default:
            printf("Erro: opcao inexistente!\n");
    }

    return 0;
}