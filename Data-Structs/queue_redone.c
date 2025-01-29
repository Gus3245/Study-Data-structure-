#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

// A queue is a linear data structure that follows the First In First Out (FIFO) 
// order of insertion and deletion. It means that the element that is inserted 
// first will be the first one to be removed and the element that is 
// inserted last will be removed at last.

#define MAX_SIZE = 20;

typedef struct Node{
	int value;
	struct Node *prox_node;
}node;

typedef struct Queue{
	int queue_size;
	struct Node *head;
	struct Node *rear;
	struct Node *aux_temporary;
}queue;

queue* create_queue(){
	
	queue *Queue = malloc(sizeof(queue));
	if (Queue == NULL){
		printf("Error, Alocation Memory Error");
	}
	
	else {
		Queue->head = NULL;
		Queue->rear = NULL;
		Queue->queue_size = 0;
	}
	return Queue;
	
}
// TODO: Enqueue or Insertion function.
void enqueue(int input_value, queue *Source){
	
	node *temporary_node = malloc(sizeof(node));
	if (temporary_node == NULL){
		printf("Error, Alocation Memory Error");
	}
	else {
		temporary_node->value = input_value;
		temporary_node->prox_node = NULL;
	}
	
	if(Source->rear == NULL){
		Source->rear = temporary_node;
		Source->head = temporary_node;
	}
	else {
		Source->head->prox_node = temporary_node;
		Source->head = temporary_node;
	}
	Source->queue_size++;
}
// TODO: Dequeue or deletion function. (return the delete element).
int dequeue(queue *Source){

	if (Source == NULL){
		printf("The Queue is already empty");
		return -1;
	}
	
	else {
		Source->aux_temporary = Source->rear;
		Source->rear = Source->rear->prox_node;

		return Source->aux_temporary->value;
		free(Source->aux_temporary);
	}
	
}
// TODO: Peek: returns the frontelement of the queue.
int peek(queue *Source){
	return 0;
}
// TODO: Empty function for remove all elements in the data struct.
void remove_all_elements(queue *Source){

}


int main(int argc, char *argv[])
{
	queue *Fila = create_queue();
	enqueue(10, Fila);
	enqueue(11, Fila);
	enqueue(12, Fila);
	dequeue(Fila);
}
