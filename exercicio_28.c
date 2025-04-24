/*
o codigo possui uma variavel do tipo float
o algoritmo recebe qualquer valor digitado pelo usuario do tipo float
*/
#include <stdio.h>
int main(){
    float numero_qualquer;

    printf("Digite qualquer numero:\n");
    scanf("%f", &numero_qualquer);

    printf("Numero digitado foi: %.2f\n", numero_qualquer);
return 0;
}