#include<stdio.h>

int main(){

    char produtoA = 'A', produtoB = 'B';

    unsigned int estoqueA = 1000, estoqueB = 2000;

    float valorA = 10.50, valorB = 20.40;

    unsigned int estoqueminA = 500, estoqueminB = 2500;

    
    printf("O produto %c tem estoque %u e o valor unitário é %.2f reais.\n", produtoA, estoqueA, valorA);
    printf("O produto %c tem estoque %u e o valor unitário é %.2f reais.\n", produtoB, estoqueB, valorB );

    printf("O estoque do produto %c está acima do mínimo? %d \n", produtoA, estoqueA > estoqueminA);
    printf("O estoque do produto %c está acima do mínimo? %d \n", produtoB, estoqueB > estoqueminB);

    printf("O valor total de A (R$ %.0f) é maior que o de B (R$ %.0f)? %d\n", estoqueA * valorA, estoqueB * valorB,  (estoqueA * valorA) >  (estoqueB * valorB) );
    printf("O valor total de B (R$ %.0f) é maior que o de A (R$ %.0f)? %d\n", estoqueB * valorB, estoqueA * valorA, (estoqueB * valorB) >  (estoqueA * valorA) );

    return 0;


}