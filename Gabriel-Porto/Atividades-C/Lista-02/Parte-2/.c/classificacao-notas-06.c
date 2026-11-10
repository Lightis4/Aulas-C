#include <stdio.h>
int main (void) {
    double nota_final_aluno;
    printf ("Digite sua nota final: ");
    if (scanf ("%lf", &nota_final_aluno) != 1) {
        printf ("Entrada Invalida, verifique o tipo primitivo digitado");
        return 1;
    }
    else {
        if (nota_final_aluno < 5) {
            printf ("REPROVADO\n");
        }
        else if (nota_final_aluno >= 5 && nota_final_aluno < 7) {
            printf ("RECUPERACAO\n");
        }
        else if (nota_final_aluno >= 7 && nota_final_aluno < 9) {
            printf ("BOM\n");
        }
        else if (nota_final_aluno >= 9) {
            printf ("EXCELENTE\n");
        }
    }
    return 0;
}