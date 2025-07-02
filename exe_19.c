#include <stdio.h>
int main(){
	int numeros_int[2], i;
	float numreal_01, numreal_02;
	printf("Digite dois numeros inteiros: ");
	for(i = 0; i < 2; i++){
		scanf("%d", &numeros_int[i]);
	}
	printf("Digite dois numeros reais: ");
	scanf("%f", &numreal_01);
	scanf("%f", &numreal_02);
	
	for(i = 0; i < 2; i++){
		printf("%d", numeros_int[2]);
	}
	printf("%.2f %.2f", numreal_01, numreal_02);
return 0;
}
