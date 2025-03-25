#include<stdio.h>

int main(){

float temperatura, umidade;
int estoque, estoqueMIN = 30;

printf("Informe a temperatura do produto: ");
scanf("%f", &temperatura);

printf("Infome a umidade do produto: ");
scanf("%f", &umidade);

printf("Informe a quantidade do produto no estoque: ");
scanf("%d", &estoque);

if (temperatura > 30)
{
    printf("A temperatura está muito alta!\n");
} else{
    printf("A temperatura está dentro dos parâmetros.\n");
}

if (umidade > 50)
{
    printf("A umidade está muito alta!\n");
} else{

    printf("A umidade está dentro dos parâmetros.\n");
} 

if (estoque > estoqueMIN)
{
    printf("Existe estoque suficiente do produto.\n");
} else
{
    printf("O estoque está baixo!\n");
}

return 0;

}

