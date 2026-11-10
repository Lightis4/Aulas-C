#include <stdio.h>

int main(void)
{

    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    // idades negativas invalidas
    if (idade < 0)
    {
        printf("Erro: valor invalido (negativo).\n");
    }
    // 0 a 12 - criança
    else if (idade <= 12)
    {
        printf("Categoria: Crianca\n");
    }
    // 13 a 17 - adolescente
    else if (idade <= 17)
    {
        printf("Categoria: Adolescente\n");
    }
    // 18 a 59 - adulto
    else if (idade < 60)
    {
        printf("Categoria: Adulto\n");
    }
    // 60 ou mais - idoso
    else
    {
        printf("Categoria: Idoso\n");
    }

    return 0;
}