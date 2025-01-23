#include<stdio.h>
#include<stdlib.h>

typedef struct No{
    int valor;
    struct No * prox;
}No;

typedef struct pilha{
	struct No *topo;
	int tamanho;
}pilha;


void add(int valor, pilha *struct_pilha){

    No * novo = malloc(sizeof(No));
    novo->valor = valor;
    novo->prox = NULL;

    //1 caso: pilha vazia
    if(struct_pilha->topo == NULL){
		struct_pilha->topo = novo;
    // 2 caso: pilha nao esta vazia e eu quero add no topo
    }else{
        novo->prox = struct_pilha->topo;
        struct_pilha->topo = novo;
    }
	struct_pilha->tamanho++;
}

int remover(pilha *struct_pilha){
    int valor;
    if(struct_pilha->tamanho > 0){
        No *lixo = struct_pilha->topo;

		if(struct_pilha->tamanho == 1){
			struct_pilha->topo = NULL;
		}else{
	        struct_pilha->topo = struct_pilha->topo->prox;

		}
        valor = lixo->valor;
        free(lixo);
        struct_pilha->tamanho--;
        return valor;
    
	}else{
        printf("Pilha esta vazia! \n");
        return -1;
    }   
}

void imprimir(pilha *struct_pilha){
    No *aux = struct_pilha->topo;
	if(aux == NULL){
		printf("Empty List \n");
	}
    while(aux != NULL){
        printf("Valor:%d\n", aux->valor);
        aux = aux->prox;
    }
}

void move(pilha *origem, pilha *recebedor){
	add(remover(origem), recebedor);

}

void tower(int disk, pilha *source, pilha *intermediate, pilha *destination){
	if(disk == 1){
		move(source, destination);
	}
	else{
		tower(disk - 1, source, destination, intermediate);
		move(source, destination);
		tower(disk - 1, intermediate, source, destination);
	}

}

int main(){
	int disk = 3;

	struct pilha *pilha1 = malloc(sizeof(pilha));
	struct pilha *pilha2 = malloc(sizeof(pilha));
	struct pilha *pilha3 = malloc(sizeof(pilha));
	add(1, pilha1);
	add(2, pilha1);
	add(3, pilha1);
	
	printf("Pilha 1 \n");
	imprimir(pilha1);

	printf("Pilha 2 \n");
	imprimir(pilha2);

	printf("Pilha 3 \n");
	imprimir(pilha3);

	tower(disk, pilha1, pilha2, pilha3);

	printf("Pilha 1 \n");
	imprimir(pilha1);

	printf("Pilha 2 \n");
	imprimir(pilha2);

	printf("Pilha 3 \n");
	imprimir(pilha3);
}
