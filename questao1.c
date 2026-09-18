#include <stdio.h>

int main() {
    float nota1, nota2, nota3, nota4, media;
    char *classificacao;
    char *situacao;

    // Entrada das quatro notas
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    printf("Digite a quarta nota: ");
    scanf("%f", &nota4);

    // Cálculo da média
    media = (nota1 + nota2 + nota3 + nota4) / 4;

    // Classificação utilizando else if
    if (media >= 9.0) {
        classificacao = "Excelente";
    } else if (media >= 7.0) {
        classificacao = "Bom";
    } else if (media >= 5.0) {
        classificacao = "Recuperacao";
    } else {
        classificacao = "Reprovado";
    }

    // Operador ternário
    situacao = (media >= 5.0) ? "Aprovado" : "Nao Aprovado";

    // Exibição dos resultados
    printf("\n--- Resultado ---\n");
    printf("Media: %.2f\n", media);
    printf("Classificacao: %s\n", classificacao);
    printf("Situacao: %s\n", situacao);

    return 0;
}