#include <stdio.h>
int main(){
	int numeros[2];
	int i;
	int soma;

	printf("Digite os numeros para somar:\n");
	for(i = 0; i < 2; i++){
		scanf("%d", &numeros[i]);
	}
	soma = numeros[0] + numeros[1]; 
	printf("Resultado: %d", soma);
return 0;
}
