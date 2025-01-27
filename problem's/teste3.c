#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	int matriz[3][3];
	int valor, value;

	for (valor= 0; valor < 3; valor++) {
		for (value = 0; value < 3; value++) {
			int number;
			printf("Digite um valor da primeira matriz: ");
			scanf("%d", &matriz[valor][value]);
		}
	}
	int multi, linha;
	printf("DIgite um valor a multiplicar:");
	scanf("%d", &multi);

	printf("digite a linha:");
	scanf("%d", &linha);

	for (valor= 0; valor < 3; valor++) {
		for (value = 0; value < 3; value++) {
			if(valor == linha){
				matriz[valor][value] *= 2;
			}
		}
	}	


	for (valor= 0; valor < 3; valor++) {
		for (value = 0; value < 3; value++) {
			printf("valor: %i \t", matriz[valor][value]);
		}
		printf("\n");
	}

}
