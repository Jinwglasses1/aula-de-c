#include<stdio.h>

int main(){

    unsigned int numero;

    do
    {
        printf("Escolha um número ímpar!\n");
        scanf("%u", &numero);

        if (numero % 2 == 0)
        {
            printf("Opção inválida! O número %u é par!\n", numero);
        } else
        {
            printf("O número %u é ímpar!\n", numero);
        }

    } while (numero % 2 != 0);

    printf("Você digitou um número par! Saindo...");



    return 0;
}