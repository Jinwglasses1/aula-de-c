#include<stdio.h>

int main(){

   int matriz1[2][2] = { {3,9} , {4,7}};
   int matriz2[2][2] = { {2,5} , {1,8}};
   int matrizSoma[2][2]; 

    for ( int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            matrizSoma[i][j] = matriz1[i][j] + matriz2[i][j];
            printf("matrizSoma[%d][%d] %d\n", i, j, matrizSoma[i][j]);
        }
        
    }


    return 0;
}