#include<stdio.h>

int main(){

    int vetor [] = {1, 2, 3, 4, 5};
    int i, soma = 0;

    for ( i = 0; i < 5; i++) // i começa sempre por 0, porque o primeiro elemento do vetor/matriz sempre está na posição 0
    {
        soma += vetor[i]; // Esse "+=" é soma = soma + vetor[i]
    }

    printf(" A soma dos vetores é: %d\n", soma);
    


    return 0;
}