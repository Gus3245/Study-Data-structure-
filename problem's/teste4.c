#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	char names[5][30];
	int valor, value;
	for (valor = 0; valor < 5; valor++) {
		printf("Digite um valor da primeira matriz: ");
		scanf("%s", names[valor]);
	}

	char name[50];
	printf("Digite o nome de quem deseja procurar:");
	scanf("%s", name);
	
	for (valor = 0; valor < 5; valor++) {
		if(strcmp(name, names[valor]) == 0){
			printf("name: %s \n", names[valor]);
		}
		else{
			printf("error 404 not found \n");
			break;
		}
	}

	for (valor= 0; valor < 5; valor++) {
		printf("name: %s \n", names[valor]);
	}
		printf("\n");

}
