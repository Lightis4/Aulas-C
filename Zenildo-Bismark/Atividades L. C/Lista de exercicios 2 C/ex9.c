// Questão 09 — Classificação por idade
// Solicite a idade e classifique: 0 a 12 — Criança; 13 a 17 — Adolescente; 18 a 59 — Adulto; 60 ou
// mais — Idoso. Idades negativas são inválidas.

#include <stdio.h>

int main(void){
    int idade;
    char nome[100];

    printf("======= CLASSIFICACAO DE IDADE =======\n");

    printf("Digite seu nome: ");
    scanf(" %99[^\n]", nome);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if(idade < 0){
        printf("Idade INVALIDA!");
    }

    else if(idade <= 12){
        printf("%s, baseado na sua idade(%d anos de idade), sua classificacao e CRIANCA!", nome, idade);
    }

    else if(idade <= 17){
        printf("%s, baseado na sua idade(%d anos de idade), sua classificacao e ADOLESCENTE!", nome, idade);
    }

    else if(idade <= 59){
        printf("%s, baseado na sua idade(%d anos de idade), sua classificacao e ADULTO!", nome, idade);
    }

    else{
        printf("%s, baseado na sua idade(%d anos de idade), sua classificacao e IDOSO!", nome, idade);
    }

    return 0;
}