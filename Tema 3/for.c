#include<stdio.h>      

// O for é utilizado quando sabemos o início e o final da repetição.
// É possível criar uma variável dentro do for, mas aí ela só poderá ser utilizada dentro dela.

int main(){

    int a = 1;

    for ( a = 1; a <= 500; a++)
    {
        printf("%d\n", a);
    }
    
    return 0;
}