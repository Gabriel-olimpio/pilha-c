#include <stdio.h>
#define TAMANHO_PILHA 20

typedef struct
{
    int vetor[TAMANHO_PILHA];
    int topo;
}Pilha;

void empilha(int valor, Pilha *pilha){

    if(pilha->topo < TAMANHO_PILHA){
        // pode empilhar
        pilha->vetor[pilha->topo] = valor;
        pilha->topo++;
        
    } else{

        printf("Pilha cheia. \n");
    }
}

void desempilha(Pilha *pilha){
    if(pilha->topo > 0){

        pilha->topo--;
        printf("Elemento removido: %d. \n",pilha->vetor[pilha->topo]);

    } else {
        printf("Pilha esta vazia. \n");
    }
}

int isCheia(Pilha *pilha){
    if(pilha->topo >= TAMANHO_PILHA){
        return 1;
    } else {
        return 0;
    }    
}

int isVazia(Pilha *pilha){
    if(pilha->topo == 0){
        return 1;
    } else {
        return 0;
    }
}



int main(int argc, char *argv[]){
    Pilha p;
    p.topo = 0;

    empilha(45, &p);
    empilha(55, &p);
    empilha(98, &p);

    printf("Topo da pilha (indice): %d. \n", p.topo);

    desempilha(&p);

    isVazia(&p);

    return 0;
}
