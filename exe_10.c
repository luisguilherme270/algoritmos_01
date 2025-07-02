#include <stdio.h>
int main(){
	float inicio, fim;
	
	printf("Digite a hora de inicio do jogo: ");
	scanf("%f", &inicio);
	printf("Digite a hora do fim do jogo: ");
	scanf("%f", &fim);

	printf("inicio: %.2f\n", inicio);
	printf("fim: %.2f", fim);
return 0;
}
