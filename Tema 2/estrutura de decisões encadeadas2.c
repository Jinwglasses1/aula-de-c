#include<stdio.h>

int main(){

int nota;

printf("Digite a sua nota: ");
scanf("%d", &nota);

/*
    A = x>=90
    B = x>=80
    C = x>=70 
    D = x>=60
    E = x>=50
    F = x<50
*/
if (nota>=90)
{
    printf("Nota A\n");

} else if (nota>=80)
{
    printf("Nota B\n");

} else if (nota>=70)
{
    printf("Nota C\n");

} else if (nota>=60)
{
    printf("Nota D\n");

} else if (nota>=50)
{
    printf("Nota E\n");

} else
{
    printf("Nota F\n");
}

    return 0;

}