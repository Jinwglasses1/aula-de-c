#include<stdio.h>

int main(){

    char *nomes[4] = {"Marcelo", "Rodrigo", "Diogo", "Renata"}; //O * é um ponteiro que precisa pôr pra dar certo
    int i;

    for ( i = 0; i < 4; i++)
    {
        printf("%s\n", nomes[i]);
    }


    return 0;
}