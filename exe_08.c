#include <stdio.h>
int main(){
	int ra, notas[3];
	int i;
	printf("Digite seu RA:");
	scanf("%d", &ra);
	printf("Digite as notas:\n");
	for(i = 0; i < 3; i++){
		scanf("%d", &notas[i]);
	}
	printf("%d\n", ra);
	for(i = 0; i < 3; i++){
		printf("%d\n", notas[i]);
	}
return 0;
}
