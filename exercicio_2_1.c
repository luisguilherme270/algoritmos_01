#include <stdio.h>
int main(){
    int numero;
    int resto;

    scanf("%d", &numero);

    resto = numero % 2;

    if(resto == 0){
        printf("Par");
    }else{
        printf("Impar");
    }
return 0;
}