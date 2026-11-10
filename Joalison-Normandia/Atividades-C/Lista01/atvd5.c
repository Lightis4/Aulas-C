#include <stdio.h>

int main() {
    char inicialNome;
    int idade;
    float nota;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    printf("Digite a inicial do nome: ");
    scanf(" %c", &inicialNome);

    printf("Digite a nota da avaliacao: ");
    scanf("%f", &nota);

    return 0;
}

// entendi o & como o indicador do lugar que eu quero guardar o valor que eu digitei