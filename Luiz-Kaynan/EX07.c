#include <stdio.h>
int main(void){
    float n1,n2,n3;
    if(scanf("%.1f %.1f %.1f", &n1, &n2, &n3) !=3){
        printf("Entrada invalida\n");
        return 1;
    }
float media = (n1,n2,n3)/3;
printf("Nota = %1.f", media);
return 0;

}