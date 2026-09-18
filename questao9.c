#include <stdio.h>

int main() {
    float temperatura;
    char *classificacao;
    char *acimaDe30;

    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &temperatura);

    // Classificação da temperatura usando else if
    if (temperatura < 0) {
        classificacao = "Muito frio";
    } else if (temperatura <= 15) {
        classificacao = "Frio";
    } else if (temperatura <= 25) {
        classificacao = "Agradavel";
    } else if (temperatura <= 35) {
        classificacao = "Quente";
    } else {
        classificacao = "Muito quente";
    }

    // Operador ternário
    acimaDe30 = (temperatura > 30) ? "Sim" : "Nao";

    // Exibição dos resultados
    printf("\n===== RESULTADO =====\n");
    printf("Temperatura: %.1f °C\n", temperatura);
    printf("Classificacao: %s\n", classificacao);
    printf("Temperatura acima de 30 °C? %s\n", acimaDe30);

    return 0;
}