/*
o codigo apresenta duas variaveis, sendo uma para armazenar em vetor um inteiro, e a outra para ser uma especie de dado temporario
o codigo pede para o usuario digitar cinco numeros para esses serem ordenados em ordem crescente
onde no primeiro laco for, repetira o processo para o usuario digitar os cinco numeros
o segundo for percorre pelos numeros, e o terceiro junto do if compara trocando os valores em cada repeticao necessaria
*/
#include <stdio.h>
int main() {
    int numeros[5];
	int temp;
	
    for (int i = 0; i < 5; i++) {
        printf("Digite o numero %d:\n", i + 1);
        scanf("%d", &numeros[i]);
    }
    for (int i = 0; i < 4; i++) {
        for (int n = i + 1; n < 5; n++) {
            if (numeros[i] > numeros[n]) {
                temp = numeros[i];
                numeros[i] = numeros[n];
                numeros[n] = temp;
            }
        }
    }
    printf("Números ordenados:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");
return 0;
}