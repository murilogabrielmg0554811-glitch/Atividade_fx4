#include <stdio.h>

int main() {
    int codigo;

    printf("Digite o codigo do usuario: ");
    scanf("%d", &codigo);

    switch (codigo) {
        case 1:
            printf("Perfil: Administrador\n");
            break;

        case 2:
            printf("Perfil: Gerente\n");
            break;

        case 3:
            printf("Perfil: Analista\n");
            break;

        case 4:
            printf("Perfil: Desenvolvedor\n");
            break;

        case 5:
            printf("Perfil: Usuario\n");
            break;

        default:
            printf("Perfil invalido.\n");
    }

    return 0;
}