#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/*
Stack is a FILO (First In Last Out) type structure, that is, the first element 
inserted will be the last to be removed. Each element of the structure
can store one or more data and a pointer to the next element, which allows
chaining and maintains a linear structure.
*/
//Node struct for Stack list.
typedef struct Node{
	int valor;
	struct Node *prox;
}node;

//Struct Stack contend x nodes.
typedef struct Stack{
	struct Node *top_node;
	int nodesize;
}stack;

node *aux_pointer = NULL;

struct Stack* create_stack();
void insert_node(stack *Stack);
void imprimir(stack *Stack);
void removed(stack *Stack);


int main(int argc, char *argv[])
{
	//Create stack.	
	stack *Stack = create_stack();
	insert_node(Stack);
	insert_node(Stack);
	insert_node(Stack);

	imprimir(Stack);

	removed(Stack);

	imprimir(Stack);


	return 0;
}

void insert_node(stack *Stack){
	
	//allocation and validation.
	node *node_element = malloc(sizeof(node));

	if (node_element == NULL){
		printf("Error, memory allocation error");
	}

	printf("Digite o valor do elemento na pilha: ");
	scanf("%d", &node_element->valor);
	
	//Push a new element in the list.
		node_element->prox = Stack->top_node;
		Stack->top_node = node_element;
		Stack->nodesize++;

}

//Alocation memory for stack node.
struct Stack* create_stack(){
	stack *Pilha = malloc(sizeof(stack));

	if (Pilha == NULL){
		printf("Error, memory allocation error \n");
		return Pilha;
	}
	Pilha -> top_node = NULL;
	Pilha -> nodesize = 0;

	return Pilha;
}

void imprimir(stack *Stack){
	node *aux_pointer = Stack -> top_node;

	if(aux_pointer->prox == NULL){
		printf("Empty List \n");
	}
	else{
		do {
			printf("Valor: %d ↑\n", aux_pointer->valor);
			aux_pointer = aux_pointer -> prox;
		} while (aux_pointer != NULL);
	}
}

void removed(stack *Stack){
	node *aux_pointer = Stack -> top_node;

	if(aux_pointer->prox == NULL){
		printf("Empty List \n");
	}
	else{
		aux_pointer = Stack ->top_node;
		printf("remove node: %d \n", aux_pointer->valor);
		Stack->top_node = Stack->top_node->prox;
		free(aux_pointer);
	}
}


