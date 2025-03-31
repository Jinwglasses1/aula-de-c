#include<stdio.h>

int main(){

int idade, renda, dependentes;

printf("Informe a idade: ");
scanf("%d", &idade);
printf("Infome a renda: ");
scanf("%d", &renda);
printf("Informe o número de dependentes: ");
scanf("%d", &dependentes);

if (idade>=18 && idade < 65)
{
    if (renda<3000)
    {
        if (dependentes>2)
        {
            printf("Você foi beneficiado!\n");
            
        } else
        {
            printf("Você não atende aos requisitos!\n");
        }
        
        
    } else
    {
        printf("Você não atende aos requisitos!\n");
    }
    
    
} else

    printf("Você não atende aos requisitos!\n");

    return 0;

}