// Questão 11 — Sistema de aprovação acadêmica
// Solicite três notas e calcule a média aritmética. Média ≥ 7: Aprovado; média ≥ 5 e &lt; 7:
// Recuperação; média &lt; 5: Reprovado. Valide notas de 0 a 10.


#include <stdio.h>

int main(void) {
    float n1, n2, n3, media;
    char nome[100];

    printf("======= CALCULANDO MEDIA =======\n");

    printf("Digite seu nome: ");
    scanf(" %99[^\n]", nome);

    printf("Digite sua primeira nota: ");
    scanf("%f", &n1);

    printf("Digite sua segunda nota: ");
    scanf("%f", &n2);

    printf("Digite sua terceira nota: ");
    scanf("%f", &n3);

    if (n1 < 0 || n1 > 10 ||
        n2 < 0 || n2 > 10 ||
        n3 < 0 || n3 > 10) {

        printf("ERRO: Uma ou mais notas sao INVALIDAS!\n");
    }

    else {
        media = (n1 + n2 + n3) / 3;

        if (media >= 7) {
            printf("Parabens, %s! Sua media e %.2f. APROVADO!\n", nome, media);
        }

        else if (media >= 5) {
            printf("Atencao, %s! Sua media e %.2f. RECUPERACAO!\n", nome, media);
        }

        else {
            printf("Que pena, %s! Sua media e %.2f. REPROVADO!\n", nome, media);
        }
    }

    return 0;
}