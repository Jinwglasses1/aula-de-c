#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(){

int opcao, numeroSecreto, palpite;

printf("***   Homo Sapiens 2   ***\n");
printf("1. Iniciar\n");
printf("2. Regras\n");
printf("3 Sair\n");
printf("Escolha uma opção: ");
scanf("%d", &opcao);

switch (opcao)
{
case 1:
    printf("Jogo iniciado!\n");

    srand(time(0));
    numeroSecreto = rand() %10; // precisa dividir por 10 porque o número gerado é muito grande.

    printf("Digite um número de 1 a 9: ");
    scanf("%d", &palpite);

    printf("Número secreto: %d \n", numeroSecreto);

    if (palpite == numeroSecreto)
    {
        printf("Você acertou!\n");
    } else
    {
        printf("Você errou! :D\n");
    }
    
    break;
case 2:
    printf("Agradecimentos a evolução e Darwin.\n");
    break;  
case 3:
    printf("Mas já?\n");
    break;
default:
    printf("Não sabe ler porra?\n");
    break;
}

return 0;

}