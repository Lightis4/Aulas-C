#include <stdio.h>
int main(void){
    int n1,n2;
    printf("Digite os dois numeoros\n");
    if(scanf("%d %d", &n1, &n2) != 2){
        printf("Entrada invalida\n");
        return 1;
    }
    printf("Soma: %d\n", (n1 + n2));
    return 0;
}
