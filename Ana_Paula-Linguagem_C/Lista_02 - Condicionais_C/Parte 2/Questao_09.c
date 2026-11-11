//Questão 09 — Classificação por idade
//Solicite a idade e classifique: 0 a 12 — Criança; 13 a 17 — Adolescente; 18 a 59 — Adulto; 60 ou mais — Idoso. Idades negativas são inválidas.

#include <stdio.h>

int main(void) {
    int idade;

    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    if (idade>=0 && idade <13) {
        printf("Classificação: CRIANÇA.\n");
    }
    else if (idade >=13 && idade < 18) {
        printf("Classificação: ADOLESCENTE.\n");
    }
    else if (idade >=18 && idade <60) {
        printf("Classificação: ADULTO.\n");
    }
    else if (idade >= 60) {
        printf("Classificação: IDOSO.\n");
    }
    else {
        printf("Idade Inválida!\n");
    }

    return 0;
}