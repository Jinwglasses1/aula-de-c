#include<stdio.h>

int main(){

/*
    Incremento: (++)
    Pré - incremento: (++a)
    Pós - incremento: (a++)
    Decremento: (--)
    Pré - decremento: (--a)
    Pós - decremento: (a--)

*/

int numero1 = 1;
printf("Antes do incremento: %d \n", numero1);

//ou utilizar numero1 += 1;
numero1++;
printf("Incremento: %d \n", numero1);

// ou utilizar numero1 -= 1;
numero1--;
printf("Decremento: %d \n", numero1);



}