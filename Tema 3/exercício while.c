#include<stdio.h>

int main(){

    int i = 0;

    while (i <= 10)
    {
        if (i % 2 == 0) // Poderia colocar != para imprimir os números ímpares
        {
            printf("%d\n", i);
        }
        i ++;
    }
    
    return 0;
}