#include <stdio.h>

int main() {
    int idade;

    printf("digite a idade: ");
    scanf("%d", &idade);

    if ( idade>=18){
        printf("maior de idade\n");
    } else{
        printf("menor de idade \n");
    }
   
    return 0;
}