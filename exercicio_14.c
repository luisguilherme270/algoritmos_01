/*
O codigo possui tres variaveis, duas floats e uma char que esta como um array,
o usuario deve digitar primeiramente cinco caracteres, em seguida dois numeros,
e no final ele imprime na tela todos os dados inseridos
*/
#include <stdio.h>
int main(){

	float numero1;
	float numero2;
	char palavra[5];
	
	printf("Digite ate cinco caracteres:\n");
	scanf("%4s", palavra);
	printf("Digite o primeiro numero:\n");
	scanf("%f", &numero1);
	printf("Digite o segundo numero\n");
	scanf("%f", &numero2);

	printf("Dados digitados\n\n");
	printf("%s\n", palavra);
	printf("%.1f\n", numero1);
	printf("%.1f\n", numero2);
return 0;
}	
