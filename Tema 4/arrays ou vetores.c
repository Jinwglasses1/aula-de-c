#include<stdio.h>

int main(){

    char letras[3] = {'A', 'B', 'C'};
    int notas[5] = {8, 19, 35, 6, 10}; //O "5" significa tamanho e não quantidade
    
    printf("Primeira nota: %d\n", notas[0]); // Sempre começa no número 0
    printf("Segunda nota: %d \n", notas[1]);
    printf("Terceira nota: %d \n", notas[2]);
    printf("Quarta nota: %d \n", notas[3]);
    printf("Quinta nota: %d \n", notas[4]);

    printf("Primeira letra: %c \n", letras[0]);
    printf("Segunda letra: %c \n", letras[1]);
    printf("Terceira letra: %c \n", letras[2]);
    

    return 0;
}