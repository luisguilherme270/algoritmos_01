/*
o codigo apresenta tres variaveis do tipo float, duas para as resistencias e uma para o totalfinal da resistencia
de maneira simplificada o codigo pega os valores das resistencias digitadas pelo usuario
e entao as multiplica e as divide pela soma das mesmas
imprimindo na tela o valor da resistencia final ou total no fim do codigo
*/
#include <stdio.h>
int main(){
    float resis_1;
    float resis_2;
    float resis_total;

    printf("Digite a resistencia 1:\n");
    scanf(" %f",&resis_1);
    printf("Digite a resistencia 2:\n");
    scanf(" %f",&resis_2);

    resis = (resis_1 * resis_2) / (resis_1 + resis_2);

    printf("O valor da resistencia total e:%.2f\n", resis_total);
return 0;
}