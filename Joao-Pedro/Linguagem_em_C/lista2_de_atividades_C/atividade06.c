#include <stdio.h>

int main(void)
{

    double nota;

    printf("Digite sua nota final (0 a 10): ");
    scanf("%lf", &nota);

    if (nota < 0 || nota > 10)
    {
        printf("Nota invalidada.\n");
    }
    else if (nota >= 9.0)
    {
        printf("Excelente.\n");
    }
    else if (nota >= 7.0)
    {
        printf("Bom.\n");
    }
    else if (nota >= 5.0)
    {
        printf("Recuperacao");
    }
    else
    {
        printf("Reprovado");
    }

    return 0;
}