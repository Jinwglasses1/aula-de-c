#include<stdio.h>

int main(){

int numero;

printf("Digite o número: ");
scanf("%d", &numero);

if (numero>0)
{
    if (numero % 2 == 0)
    {
        printf("Esse número é positivo e par.\n");
    } else
    {
        printf("Esse número é positivo e ímpar.\n");
    }
       
} else if (numero<0)
{
    printf("Esse número é negativo.\n");
} else
{
    printf("Esse número é igual a 0.\n");
}


return 0;


}