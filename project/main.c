#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

typedef struct Block {
    char name[45];
    struct Block *next;
} Block;

Block *auxNextBlock = NULL;


void createFirst(char name[]) { //Cria um bloco no inicio da lista
    Block *linkedBlock = (Block*) malloc(sizeof(Block));   
    
};

void userChoice(int choice) {



    switch (choice) {
        case 0:

            createFirst();
            break;

        case 1:

            break;

        case 2:

            break;

        default:

            break;
    }
}

void clearScreen() { //limpa a tela
    

    system("cls");
    printf("Carregando");
    for(int i=0; i < 10; i++) {
        Sleep(500);
        printf(".");
    }
    system("cls");

}


void closeProgram() { //Mensagem de encerramento do programa.
    printf("Encerrando");
    for(int i=0; i < 5; i++) {
        Sleep(500);
        printf(".");
    }
    exit(0);
};

void conditional(int choice, int *pChoice) { //Primeira opção do usuário.

    switch(choice) {
        case 0:
            closeProgram();
            break;
        
        case 1:
            enterChangeMenu();
            break;

        default:

            printf("\n[ERRO]!\n\n");
            startMenu(pChoice);
            break;    
        }
    
};

void enterChangeMenu() {
    clearScreen();
    
    int choiceChange;
    Sleep(300);
    printf("0 - Salvar no inicio.\n");
    Sleep(300);
    printf("1 - Salvar no final.\n");
    Sleep(300);
    printf("2 - Salvar arbitrariamente.\n");
    Sleep(300);
    printf("[qualquer tecla] - Encerrar processo.\n");
    scanf("%d%*c", &choiceChange);

    userChoice(choiceChange);

};

void startMenu(int *pValue) { //Primeiro menu de opções.
    int value;
    
    Sleep(300);
    printf("0 - Salvar dado .\n");
    Sleep(300);
    printf("1 - Encerrar processo.\n");
    Sleep(300);
    printf("Entrada: ");
    scanf("%d%*c", &value);
    Sleep(300);

    *pValue = value;
    conditional(*pValue, pValue);
};


int main(void) {
    int optionStart;
    startMenu(&optionStart);

};