#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int idade =1;
	while (idade!=0){
		printf("Digite a sua idade(Digite 0 para cancelar): ");
		scanf("%d", &idade);
		if (idade>=18){
			printf("Voce e maior de idade.\n");
			}
		if (idade<18 && idade!=0){
			printf("Voce e menor de idade.\n");
		}
	}
	return 0;
}
