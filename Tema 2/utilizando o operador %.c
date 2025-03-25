#include <stdio.h>

int main(){

    int numero;
    int resultado;
    
    printf("Digite um número: ");
    scanf("%d", &numero);

    resultado =  numero % 2;

    printf("O resto da divisão é igual a: %d", resultado);

    if (resultado == 0) //nunca pôr ponto e vírgula no final do if.
    {
        printf("\nO número é par!\n");
    } else{

        printf("\nO número é ímpar!\n");
    }

    return 0;

}