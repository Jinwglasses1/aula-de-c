#include<stdio.h>

int main(){

    // nesse exemplo as notas só podem ser inteniras, mas a média é decimal

    int nota1, nota2, nota3;
    float media;
    
    printf("***Programa de cálculo de notas***\n");

    printf("\nDigite a primeira nota: ");
    scanf("%d", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%d", &nota2);

    printf("Digite a sua terceira nota: ");
    scanf("%d", &nota3);

    media = (float) (nota1 + nota2 + nota3) / 3;

    printf("Resultado: %.1f", media);







    return 0;
}