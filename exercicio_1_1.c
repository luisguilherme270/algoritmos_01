/*
O codigo apresenta tres variaveis, sendo as duas primeiras respectivamente para receber os dados de peso
e altura, e depois a terceira variavel sera a operacao aritmetica para realizar o IMC. Onde o valor da
altura deve ser informada em metros e o peso em kilogramas
*/
#include <stdio.h>
int main(){
    float peso;
    float altura;
    float imc;

    scanf("%f", &peso);
    scanf("%f", &altura);

    imc = (peso) / (altura * altura);
    
    printf("%.2f", imc);
return 0;
}
