#include <stdio.h>
int main(){
	int numeros[3], i;
	printf("Digite tres numeros: ");
	for(i = 0; i < 3; i++){
		scanf("%d", &numeros[i]);
	}
	for(i = 0; i < 3; i++){
		printf("%d ", numeros[i]);
	}
return 0;
}
