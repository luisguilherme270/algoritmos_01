#include <stdio.h>
int main(){
	int altura;
	char genero;

	printf("Digite a altura ");
	scanf("%d", &altura);
	printf("Digite o caracter do genero entre M/F ");
	scanf(" %c", &genero);
	
	if(altura >= 100){
		altura = altura / 100;
	}
	if((genero != 'm') && (genero != 'f')){
		printf("Invalido ");
		return 1;
	}
	printf("Altura em metros: %d \n", altura);
	printf("Genero: %c", genero);
return 0;
}
