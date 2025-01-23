#include <stdio.h>
#include <stdlib.h>

typedef struct No{
    int valor;
    struct No *prox;
}No;

typedef struct Stack{
	struct No *top_node;
	int size;
}stack;


void add_to_stack(stack *Source, int value){
	No *new_node = malloc(sizeof(No));
	new_node->prox = NULL;
	new_node->valor = value;

	if(Source->top_node == NULL){
		Source->top_node = new_node;
	}
	else{
		new_node->prox = Source->top_node;
		Source->top_node = new_node;
	}
	Source->size++;
}

int remove_in_stack(stack *Source){
	int returnvalue;
	
	if(Source -> size > 0){
		No *trash = Source->top_node;
		
		if(Source-> size == 1){
			Source->top_node = NULL;
		}
		else{
			Source->top_node = Source->top_node->prox;
		}
		returnvalue = trash->valor;
		free(trash);

		Source-> size--;
		return returnvalue;
	}
	else{
		printf("Empty List");
		return -1;
	}
}

void print_list(stack *Source){
	No *aux = Source->top_node;
	
	if(Source->top_node == NULL){
		printf("Empty List \n");
	}
	do{	
		printf("value: %d \n", aux->valor);
		aux = aux->prox;
	}while (aux != NULL);
}

void move_disk(stack *origin, stack *destination){
	add_to_stack(destination, remove_in_stack(origin));
	
}

int main(int argc, char *argv[])
{
}


