#include <stdio.h>

int main() {
    int idade;
    char *faixaEtaria;
    char *maiorDeIdade;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    // Classificação da faixa etária usando else if
    if (idade >= 0 && idade <= 12) {
        faixaEtaria = "Crianca";
    } else if (idade <= 17) {
        faixaEtaria = "Adolescente";
    } else if (idade <= 59) {
        faixaEtaria = "Adulto";
    } else if (idade >= 60) {
        faixaEtaria = "Idoso";
    } else {
        faixaEtaria = "Idade invalida";
    }

    // Operador ternário
    maiorDeIdade = (idade >= 18) ? "Sim" : "Nao";

    // Exibição dos resultados
    printf("\n===== RESULTADO =====\n");
    printf("Idade: %d anos\n", idade);
    printf("Faixa etaria: %s\n", faixaEtaria);
    printf("E maior de idade? %s\n", maiorDeIdade);

    return 0;
}