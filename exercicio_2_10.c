#include <stdio.h>
int main(){
    float numeros[4];
    float limite;
    float media;

    for (int i = 0; i < 4; i++){
        scanf("%f", &numeros[i]);
    }
    scanf("%f", &limite);

    media = (numeros[0] + numeros[1] + numeros[2] + numeros[3]) / 4;

    if (media > limite){
        printf("Acima da media: %.2f", media);
    }
    else if (media == limite)
    {
        printf("Igual ao limite: %.2f", media);
    }
    else if (media < limite)
    {
        printf("Abaixo da media: %.2f", media);
    }    
return 0;
}