#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Queue is a FIFO (First In First Out) type structure, that is, 
 * the first element inserted will be the first to be removed. 
 * Each element of the structure can store one or more data and a
 * pointer to the next element, which allows chaining and maintains a linear structure.*/

typedef struct Node{
	int value;
	struct Node *prox;
}node;

typedef struct Queue{
	struct Node *start_node;
	struct Node *end_node;
	int size;
}queue;

struct Node *aux_temporary;

void insert_element(int value, queue *Source);
void print_allElements(queue *Source);
int remove_element(queue *Source);
void remove_allElements(queue *Source);
queue* create_queue();

int main(int argc, char *argv[])
{
	queue *queue_list = create_queue();	
}

queue* create_queue(){

	queue *Fila = malloc(sizeof(queue));
	if(Fila == NULL){
		printf("Error, Alocation Memory fault");
		return Fila;
	}

	Fila->end_node = NULL;
	Fila->start_node = NULL;
	return Fila;
}

//  TODO: Implementing insert elements function to queue.
void insert_element(int value, queue *Source){
	
	node *temporary_node = malloc(sizeof(node));
	if(temporary_node == NULL){
		printf("Error, Alocation Memory fault");
	}

	temporary_node->prox = NULL;
	temporary_node->value = value;

	if(Source->start_node == NULL){
		Source->start_node = temporary_node;
		Source->end_node = temporary_node;
	}
	else{
		Source->end_node->prox = temporary_node;
		Source->end_node = temporary_node;
	}
	printf("Operation succesfull");
	Source->size++;
}

//  TODO: Implementing remove one element function to queue.
int remove_element(queue *Source){
	
	if(Source->start_node == NULL){
		printf("Empty List");
		return -1;
	}

	else{
		aux_temporary = Source->start_node;
		printf("Value: %d \n", aux_temporary->value);
		Source->start_node = Source->start_node->prox;

		return aux_temporary->value;
		free(aux_temporary);
	}
}

//  TODO: Print all elements in queue.

void print_allElements(queue *Source){
	if(Source->start_node == NULL){
		printf("Empty List");
	}
	
	else {
		aux_temporary = Source->start_node;
		do {
			printf("valor: %d \n", aux_temporary->value);
			aux_temporary = aux_temporary->prox;
		} while (aux_temporary->prox != NULL);
	}
}

//  TODO: Empty the past list.
void remove_allElements(queue *Source){

}


