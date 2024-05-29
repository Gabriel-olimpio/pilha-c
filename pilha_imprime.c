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

void imprimePilha(Pilha *pilha){
    int i;

    for(i = (pilha->topo); i--; i>=0){
        printf("%02d \n", pilha->vetor[i]); // = pilha->vetor[pilha->topo]
    }
}



int main(int argc, char *argv[]){
    Pilha p;
    p.topo = 0;

    empilha(45, &p);
    empilha(55, &p);
    empilha(12, &p);
    empilha(4, &p);
    empilha(67, &p);
    empilha(10, &p);
    empilha(13, &p);

    printf("Topo da pilha (indice): %d. \n", p.topo);

    desempilha(&p);

    imprimePilha(&p);

    return 0;
}
