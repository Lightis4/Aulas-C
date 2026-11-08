#include <stdio.h>

int main(void){

    double media;
     
    printf("Digite a sua media final: ");
    scanf("%lf", &media);

    if (media >= 7.0){
    printf("Aprovado.\n");
}
    else {
    printf("Reprovado.\n");
}
    
    return 0;

}