#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

     int numeroPlayer, numeroCPU, opcao, resultado;
    

    srand(time(0)); 
    numeroCPU = rand() % 100 + 1; //Números de 1 a 100. O resto da divisão é somado com o número 1 para dar números entre 1 e 99. 

    printf("### Bem vindo! ###\n");
    printf("Escolha um número de 1 a 100: ");
    scanf("%d", &numeroPlayer);

    printf("1. Maior\n");
    printf("2. Menor\n");
    printf("3. Igual\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        resultado = numeroPlayer > numeroCPU ? 1 : 0;

        printf("Você escolheu: %d e a cpu: %d\n",numeroPlayer, numeroCPU);

        break;
    case 2:
        resultado = numeroPlayer < numeroCPU ? 1 : 0;

        printf("Você escolheu: %d e a cpu: %d\n",numeroPlayer, numeroCPU);
        break;
    case 3:
    
        resultado = numeroPlayer == numeroCPU ? 1 : 0;

        printf("Você escolheu: %d e a cpu: %d\n",numeroPlayer, numeroCPU);

        break;
    default:
        
        printf("Opção inválida!");
        break;
    }
    if (resultado == 1)
    {
        printf("Você venceu.");
    } else
    {
        printf("Você perdeu.");
    }
    
    
    
    return 0;
}