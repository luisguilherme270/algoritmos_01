#include <stdio.h>
int main (){
    float numero;
    float limite_1;
    float limite_2;
    float menor;
    float maior;

    scanf("%f", &numero);
    scanf("%f", &limite_1);
    scanf("%f", &limite_2);

    if((numero >= limite_1) && (numero <= limite_2) || (numero >= limite_2) && (numero <= limite_1)){
        printf("Dentro");
    }else{
        printf("Fora");
    }
return 0; 
}