#include<stdio.h>

int main(){

/*
    Nesse caso há duas variáveis sendo calculadas simultâneamente, mas com apenas uma condição.
*/    

for (int i = 0, j = 10; i <= j; i++, j--) 

{
    printf("i = %d, j = %d \n", i, j);
}


return 0;

}