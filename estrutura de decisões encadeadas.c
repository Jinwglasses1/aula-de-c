#include<stdio.h>

int main(){

    int idade;

    printf("Digite a sua idade:");
    scanf("%d", &idade);

    /*
        criança < 12
        adolescente 12 <= idade < 18
        adulto 18 <= idade < 60
        idoso >= 60
    */
   if (idade<12)
   {
    printf("Criança.\n");
   } else if (idade >=12 && idade <18)
   {
    printf("Adolescente.\n");
   } else if (idade>=18 && idade<60)
   {
    printf("Adulto.\n");
   } else
   {
    printf("Idoso.\n");
   }
   
   return 0;
   

}