// Questão 04 — Aprovação escolar
// Solicite a média final de um aluno e informe sua situação: média maior ou igual a 7 — Aprovado;
// média menor que 7 — Reprovado.

#include <stdio.h>

int main(void){
    float media;

    printf("Digite sua media: ");
    scanf("%f", &media);

    if (media >= 7){
        printf("Parabens, sua media foi %.2f, e voce foi APROVADO!", media);
    }

    else{
        printf("Que pena, sua media foi %.2f, e voce foi REPROVADO!", media);
    }

    return 0;
}