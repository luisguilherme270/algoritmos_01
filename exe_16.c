#include <stdio.h>
int main(){
	float num_01, num_02, num_03;
	printf("Digite tres numeros reais: ");
	scanf("%f", &num_01);
	scanf("%f", &num_02);
	scanf("%f", &num_03);
	printf("%.2f %.2f %.2f", num_01, num_02, num_03);
return 0;
}
