#include<stdio.h>

int main(){

    int numero1, numero2;
    
    printf("Digite o primeiro número: ");
    scanf("%d", &numero1);

    printf("Digite o segundo número: ");
    scanf("%d", &numero2);

    if (numero1 > numero2) // se não for maior, o comando print não será executado.
    {
        printf("O primeiro número é maior que o segundo! \n");
    
    } else{
        
        printf("O segundo número é maior que o primeiro!\n");
    }
    
    return 0;

}