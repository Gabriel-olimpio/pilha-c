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

        printf("Pilha cheia");
    }
}

int main(int argc, char *argv[]){
    Pilha p;
    p.topo = 0;

    empilha(45, &p);
    empilha(55, &p);
    empilha(98, &p);

    printf("Topo da pilha: %d. \n", p.topo);
    return 0;
}
