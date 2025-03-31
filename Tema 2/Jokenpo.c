#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

int jogador, maquina;

srand(time(0));

printf("*** JOKENPO ****");
printf("Escolha uma opção: \n");
printf("1. Pedra\n");
printf("2. Papel\n");
printf("3. Tesoura\n");

printf("Escolha um número: ");
scanf("%d", &jogador);

maquina = rand() % 3 + 1;


switch (jogador)
{
case 1:
    printf("Jogador: Pedra\n");
    break;
case 2:
    printf("Jogador: Papel\n");
    break;
case 3:
    printf("Jogador: Tesoura\n");
    break;    
    
default:
    printf("Comando inválido!\n");
    break;
}

switch (maquina)
{
case 1:
    printf("CPU: Pedra\n");
    break;
case 2:
    printf("CPU: Papel\n");
    break;
case 3:
    printf("CPU: Tesoura\n");
    break;    

}

if (maquina = jogador)
{
   printf("### EMPATE! ###\n");
} else if ((jogador == 1 && maquina == 3) || (jogador == 2 && maquina == 1) || (jogador == 3 && maquina == 2)) 
{
    printf("### VOCÊ VENCEU! ###\n");
} else
{
    printf("### VOCÊ PERDEU! ###\n");

}

return 0;


}