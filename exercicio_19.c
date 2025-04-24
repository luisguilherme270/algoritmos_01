/*
possui tres variaveis sendo duas float e uma int, o codigo apresentado
pede ao usuario digitar dois valores e a partir deles sera realizado uma multiplicacao
que deve obrigatoriamente retornar um inteiro
*/
#include <stdio.h>
int main(){
	float numero_1;
	float numero_2;
	int multp;

	printf("Digite o primeiro numero\n");
	scanf("%f",&numero_1);
	printf("Digite o segundo numero\n");
	scanf("%f", &numero_2);
	
	multp = numero_1 * numero_2;
	
	printf("A multiplicacao entre eles e: %d\n", multp);

return 0;
}
