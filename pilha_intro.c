#include <stdio.h>

#define TAMANHO_PILHA 20

// Criação da pilha
typedef struct{
    int vetor[TAMANHO_PILHA];
    int topo;
} Pilha;


// Assim é feito de forma local (main function)
int main(int argc, char *argv[]){
    Pilha p;
    p.topo = 0;

    // empilhar
    p.vetor[p.topo] = 45;
    p.topo++;
    
    // desempilhar
    p.topo--;
    printf("Elemento retirado da pilha %d \n", p.vetor[p.topo]);
    
    return 0;

}

void empilha(int valor, Pilha *pilha){

    if(pilha->topo < TAMANHO_PILHA){
        // pode empilhar
        pilha->vetor[pilha->topo] = valor;
        pilha->topo++;
        
    } else{

        printf("Pilha cheia");
    }
}

