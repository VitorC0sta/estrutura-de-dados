#include <stdio.h>  
#include <stdlib.h>
#include <string.h>
#include <math.h>


typedef struct person {
    
    int age;
    float height;
    float weigth;
    char name[30];

} Person;


void main (){

    Person vitor_costa;

    vitor_costa.age = 21;
    vitor_costa.weigth = 92.5;
    vitor_costa.height = 1.73;
    strcpy(vitor_costa.name, "Vitor Costa");
    
    printf("Dados cadastrados\n\n");
    printf("Name: %s\n", vitor_costa.name);
    printf("Height: %.2f\n", vitor_costa.weigth); 
    printf("Weigth: %.2f\n", vitor_costa.height);
    printf("Age: %d\n", vitor_costa.age);
    printf("IMC: %.2f", vitor_costa.weigth/pow(vitor_costa.height,2));
}