#include <stdio.h>
int main(void){
    float n1;
    printf("Digite um numero: ");              
    scanf("%f", &n1);
    float n2;
    printf("Digite seu segundo numero: ");
    scanf("%f", &n2);
    char op;
    printf("Qual operacao voce quer: ");
    scanf(" %c", &op);                         
    if (op == '+')
    {
        printf("Resultado: %f\n", n1+n2);       
    }
    else if (op == '-')
    {
        printf("Resultado: %f\n", n1-n2);
    }
    else if (op == '/')
    {                                           
        if (n2 == 0)                            
        {
            printf("Operacao invalida!\n");
        }
        else
        {
            printf("Resultado: %f\n", n1/n2);
        }
    }                                          
    else if (op == '*')                         
    {
        printf("Resultado: %f\n", n1*n2);
    }
    else                                        
    {
        printf("Operacao invalida!\n");
    }
    return 0;
}