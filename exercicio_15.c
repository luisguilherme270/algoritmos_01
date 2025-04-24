/*
o codigo possui quatro variaveis, sendo tres do tipo inteiro e uma do tipo float,
o codigo de maneira simples recebe tres numeros digitados pelo usuario, os somando
para realizar uma media entre eles
*/
#include <stdio.h>
int main(){

	int num_1;
	int num_2;
	int num_3;
	float media;

	printf("Digite o primeiro numero:\n");
	scanf("%d", &num_1);
	printf("Digite o segundo numero:\n");
	scanf("%d", &num_2);
	printf("Digite o terceiro numero:\n");
	scanf("%d", &num_3);

	media = (num_1 + num_2 + num_3) / ( 3);
	printf("A media desses numeros e: %.2f\n", media);
	
return 0;	
}
