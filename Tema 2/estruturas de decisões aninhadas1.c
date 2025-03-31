#include<stdio.h>

int main(){

int idade, renda;

printf("Digite sua idade: ");
scanf("%d", &idade);
printf("Digite sua renda: ");
scanf("%d", &renda);

if (idade<=18 || idade>=60)
{
  if (renda<2000)
  {
    printf("Você ganhou o desconto");
  } else
  {
    printf("Você não ganhou o desconto");
  }
   
 } else
{
    printf("Sua idade não contempla o desconto.");
}


return 0;

}