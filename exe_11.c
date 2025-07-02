#include <stdio.h>
int main(){
	int numeros[4], i;

	printf("Digite quatro numeros para o conjunto ");
	for(i = 0; i < 4; i++){
		scanf("%d", &numeros[i]);
	}
	printf("Os numeros do conjunto sao: \n");
	for(i = 0; i < 4; i++){
		printf("%d ", numeros[i]);
	}
return 0;
}
