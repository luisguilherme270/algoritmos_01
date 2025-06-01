#include <stdio.h>
int main(){
	int numeros[3];
	int i, soma = 0, divisao;
	
	printf("Digite as notas:\n");
	for(i = 0; i < 3; i++){
		scanf("%d", &numeros[i]);
		soma += numeros[i];
	}
	divisao = soma / 3;
	printf("Resultado: %d", divisao);
return 0;
}
