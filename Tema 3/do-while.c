#include<stdio.h>

int main(){

    // o do - while garante que o código seja executado ao menos uma vez mesmo se a condição for falsa.

    int a = 1;

    do
    {
        printf("%d\n", a);
        a++;
    } while (a == 10);
    

    return 0;
}