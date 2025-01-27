#include <stdio.h>
int main(int argc, char *argv[])
{
	int matriz[3][3];
	int matriz2[3][3];
	int matriz3[3][3];
	int valor, value;
	for (valor= 0; valor < 3; valor++) {
		for (value = 0; value < 3; value++) {
			int number;
			printf("Digite um valor da primeira matriz: ");
			scanf("%d", &matriz[valor][value]);
		}
	}

	for (valor= 0; valor < 3; valor++) {
		for (value = 0; value < 3; value++) {
			int number;
			printf("Digite um valor da seconda matriz: ");
			scanf("%d", &matriz2[valor][value]);
		}
	}

	for (valor= 0; valor < 3; valor++) {
		for (value = 0; value < 3; value++) {
			matriz3[valor][value] = matriz2[valor][value] + matriz[valor][value];
		}
	}	

	for (valor= 0; valor < 3; valor++) {
		for (value = 0; value < 3; value++) {
			printf("valor: %i \t", matriz3[valor][value]);
		}
		printf("\n");
	}
}
