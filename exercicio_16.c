/*
o codigo possui quatro variaveis do tipo float, tres para as dimensoes do objeto e uma para o volume
o codigo recebe os valores digitados pelo usuario e depois multiplica as tres dimensoes inseridas
realizando um calculo para do volume
*/
#include <stdio.h>
int main(){

	float dimen_1;
	float dimen_2;
	float dimen_3;
	float volume;

	printf("Digite o valor do primeiro lado:\n");
	scanf("%f", &dimen_1);
	printf("Digite o valor do segundo lado:\n");
	scanf("%f", &dimen_2);
	printf("Digite o valor do terceiro lado:\n");
	scanf("%f", &dimen_3);

	volume = (dimen_1 * dimen_2) * (dimen_3);
	printf("O volume do objeto e: %.2f\n", volume);
return 0;
}
