//Questão 11 — Sistema de aprovação acadêmica
//Solicite três notas e calcule a média aritmética. Média ≥ 7: Aprovado; média ≥ 5 e < 7: Recuperação; média < 5: Reprovado. Valide notas de 0 a 10.

#include <stdio.h>

int main(void) {
    float nota_1, nota_2, nota_3, media;

//Validação das notas
    printf("Digite a primeira nota: \n");
    
    if (scanf("%f", &nota_1) != 1) {
        printf("Nota em formato inválido.\n");
    }
    else if (nota_1 < 0 || nota_1 > 10) {
        printf("Nota inválida. Digite um valor de 0 a 10.\n");
    }
    else {
        
        printf("Digite a segunda nota: \n");
        
        if (scanf("%f", &nota_2) != 1) {
            printf("Nota em formato inválido.\n");
        }
        else if (nota_2 < 0 || nota_2 > 10) {
            printf("Nota inválida. Digite um valor de 0 a 10.\n");
        }
        else {
            
            printf("Digite a terceira nota: \n");
        
            if (scanf("%f", &nota_3) != 1) {
                printf("Nota em formato inválido.\n");
            }
            else if (nota_3 < 0 || nota_3 > 10) {
                printf("Nota inválida. Digite um valor de 0 a 10.\n");
            }

//A validação dando certo, executa:            
            else {
                media = (nota_1+nota_2+nota_3)/3;

                if (media >= 7) {
                    printf("Média: %.1f - Situação: Aprovado.\n", media);
                }
                else if (media < 5) {
                    printf("Média: %.1f - Situação: Reprovado.\n", media);
                }
                else {
                    printf("Média: %.1f - Situação: Recuperação.\n", media);
                }
                return 0;
            }
        }
    }
return 1;
}