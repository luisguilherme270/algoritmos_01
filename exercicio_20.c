/*
o codigo possui tres variaveis, sendo duas char e uma int, onde as duas char estao como vetores
e um codigo onde ele compara as letras digitadas pelo usuario colocando elas em ordem alfabetica atraves de repeticao
onde o primeiro for na linha 12, sera responsavel pela repeticao da insercao das letras pelo usuario
o bloco for das linhas 15 - 23, sao os responsaveis para ordenar em ordem alfabetica as letras digitadas
onde o if quando o caracter atual e maior que o digitado entao passa para a proxima ate ficar ordenado
*/
#include <stdio.h>
int main(){
	char caracter[3];
	int armaz;
	char letras[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	for(int i = 0; i < 3 ; i++){
	printf("Digite a letra%d:\n", i + 1);
	scanf(" %c", &caracter[i]);
	}for(int i = 0; i < 4; i++){
		for(int c = i + 1 ; c < 4 ; c++){
				if(caracter[i] > caracter[c]){
					armaz = caracter[i];
					caracter[i] = caracter[c];
					caracter[c] = armaz;
				}
			}
		}
	printf("Em ordem: ");
	for(int i = 0; i < 3; i++){
		printf("%c", caracter[i]);
	}
	printf("\n");
return 0;
}
