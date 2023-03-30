#include <stdio.h>
#include <string.h>
#include <stdlib.h>


typedef struct block { // Define como será a estrutura. 
    float input; // Dado guardado.
    struct block *next; // Ponteiro para prox posição.

 } Block;

Block *nextBlock = NULL; // Conteiro auxiliar da proxima posição

void listFactory(float inp) { // Constroi cada estrutura da lista.
    Block *p_block = (Block*) malloc (sizeof (Block)); //alocação dinâmica.

    p_block->input = inp;
    p_block->next = nextBlock; // Coloca no next o conteudo do ponteiro auxiliar.


    nextBlock = p_block; // Preenche o auxiliar com o endereço da estrutura anterior.

}

void printList() { // Loop do inicio da lista até o fim.

    Block *aux_lista = nextBlock; // Ponteiro aux. com o mesmo valor de next block.

    while(aux_lista != NULL) { // Enquanto o aux. for diferente de null (primeiro valor guardado na lista);
        printf("data(%.2f).\n", aux_lista->input); // Mostra o dado da estrutura apontada.
        aux_lista = aux_lista->next; // Recebe o proximo endereço apontado.
    }
}

int main () {
    float data = 5.75;

    for(int i = 0; i < 4; i++) {
        listFactory(data);
        data += 0.68;
    }

    printList();
    return 0;
}


