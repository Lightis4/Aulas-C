//Questão 04 — Aprovação escolar
//Solicite a média final de um aluno e informe sua situação: média maior ou igual a 7 — Aprovado; média menor que 7 — Reprovado.

#include <stdio.h>

int main(void) {
    float media;

    printf("Digite a média: ");
    scanf("%f", &media);

    if (media >= 7) {
        printf("Aprovado.");
    }
  else if (media < 7 && media >= 0) {
        printf("Reprovado\n");
    }
    else {
        printf("Você digitou uma média inválida.\n");
    }

    return 0;
}
