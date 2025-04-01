#include<stdio.h>

int main(){

    int i, j;
    char letra;

    letra = 'A'; // esse loop vai printar as letras na sequência alfabética

    for ( i = 1; i <= 5; i++)
    {
        for ( j = 1; j <= i; j++)
        {
            printf("%c", letra);
            ++letra;
        }
        
    } printf("\n");
    


    return 0;
}