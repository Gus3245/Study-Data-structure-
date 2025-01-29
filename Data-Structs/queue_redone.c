#include <stdio.h>
#include <stdint.h>

// A queue is a linear data structure that follows the First In First Out (FIFO) 
// order of insertion and deletion. It means that the element that is inserted 
// first will be the first one to be removed and the element that is 
// inserted last will be removed at last.

typedef struct Node{
	int value;
	struct Node *prox_node;
	struct Node *ant_node;
}node;

typedef struct Queue{
	struct Node *head;
	struct Node *rear;
}queue;

// TODO: Enqueue or Insertion function.
void enqueue(int input_value, queue *Source){

}
// TODO: Dequeue or deletion function. (return the delete element) 
int dequeue(queue *Source){
	return 0;
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
	
}
