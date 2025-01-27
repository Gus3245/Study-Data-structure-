#include <stdio.h>
#include <stdlib.h>

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
	struct Node *aux_node;
}queue;

void insert_element(int value, queue *Source);
void print_allElements(queue *Source);
int remove_element(queue *Source);
void remove_allElements(queue *Source);

int main(int argc, char *argv[])
{
	
}

//  TODO: Implementing insert elements function to queue.
void insert_element(int value, queue *Source){

}

//  TODO: Implementing remove one element function to queue.
int remove_element(queue *Source){
	return 1;

//  TODO: Print all elements in queue.
}
void print_allElements(queue *Source){

}

//  TODO: Empty the past list.
void remove_allElements(queue *Source){

}


