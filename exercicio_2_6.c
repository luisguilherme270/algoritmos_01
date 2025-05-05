#include <stdio.h>
int main(){
    float salario;
    float percentual;
    float aumento;
    float salario_final;
    
    scanf("%f", &salario);
    scanf("%f", &percentual);
    
    percentual = percentual / 100;
    aumento = salario * percentual;
    salario_final = salario + aumento;
    
    printf("%.2f", salario_final);
return 0;
}
    