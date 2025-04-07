#include<stdio.h>

#define L 5  //Definindo uma constante antes, é possível alterar o valor número aqui sem precisar alterar uma por uma em todo código
#define C 5

int main(){

    int matriz[L][C];
    int soma = 0;      

    for (int i = 0; i < L; i++)
    {
        for (int j = 0; j < C; j++)
        {
            soma++;
            matriz[i][j] = soma;
            printf("%d ", matriz[i][j]);
        }

        printf("\n");
        
    }
    


    return 0;
}