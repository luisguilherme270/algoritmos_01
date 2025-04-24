/*
o codigo possui apenas uma variavel char, que armazenara o caractere digitado
o codigo e simples onde quando o usuario digitar 'o' sera imprimido na tela 'e'
e o contrario quando digitado 'e' sera imprimido 'o'
*/
#include <stdio.h>
int main(){
	char caract;

	printf("Digite um caractere entre 'o' ou 'e'\n");
	scanf("%c", &caract);
	if(caract == 'o'){
		printf("Foi digitado 'e'\n");
	}
	if(caract == 'e'){
		printf("Foi digitado 'o'\n");
	}
return 0;
}
