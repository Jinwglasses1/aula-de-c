#include<stdio.h>


//Optar por usar estruturas de repetição com menor que ao invés de maior que


void recursivo(int numero){

    if (numero > 0)
    {
        printf("%d\n", numero); //Se botar o printf depois do recursivo, ele vai printar de 1 até 10, ao invés de 10 até 1;
        
        recursivo(numero - 1); //Depois de printar o número, é subtraído uma unidade e colocado de volta no recursivo;
    }

}

int main(){

    int quantidade = 10;
    printf("Contagem regressiva\n");

    recursivo(quantidade);

    return 0;
}