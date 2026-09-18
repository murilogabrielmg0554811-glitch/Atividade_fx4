#include <stdio.h>

int main() {
    int opcao;
    char *veiculo;
    char *pesado;

    printf("===== TIPOS DE VEICULO =====\n");
    printf("1 - Motocicleta\n");
    printf("2 - Automovel\n");
    printf("3 - Van\n");
    printf("4 - Onibus\n");
    printf("5 - Caminhao\n");

    printf("\nDigite a opcao: ");
    scanf("%d", &opcao);

    // Identificação do veículo usando switch
    switch (opcao) {
        case 1:
            veiculo = "Motocicleta";
            break;

        case 2:
            veiculo = "Automovel";
            break;

        case 3:
            veiculo = "Van";
            break;

        case 4:
            veiculo = "Onibus";
            break;

        case 5:
            veiculo = "Caminhao";
            break;

        default:
            veiculo = "Veiculo invalido";
    }

    // Operador ternário para verificar se é veículo pesado
    pesado = (opcao == 4 || opcao == 5) ? "Sim" : "Nao";

    // Exibição dos resultados
    printf("\n===== RESULTADO =====\n");
    printf("Veiculo selecionado: %s\n", veiculo);
    printf("Veiculo pesado? %s\n", pesado);

    return 0;
}