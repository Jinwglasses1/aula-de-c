#include<stdio.h>

int main(){

int nota1, nota2, media, opcao;

printf("### MENU DE GERENCIAMENTO DE ESTUDANTES ###\n");
printf("1. Calcular média.\n");
printf("2. Determinar Status.\n");
printf("3. Sair.\n");
scanf("%d", &opcao);

switch (opcao)
{
case 1:
    printf("Digite a primeira nota: ");
    scanf("%d", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%d", &nota2);
    
    if ((nota1 >= 0 && nota1 <= 10) && (nota2 >= 0 && nota2 <= 10))
    {
        media = (nota1 + nota2) / 2;
    printf("Sua média é: %d. Confira o status para confirmar sua aprovação.\n", media);
    } else
    {
        printf("Entradas incorretas!\n");
    }
    
    break;
case 2: 
    printf("Digite a média: ");
    scanf("%d", &media);
    media >= 6 ? printf("Você foi aprovado!") : printf ("Você foi reprovado!");    
    break;
case 3:

    printf("Você saiu.\n");
    break;    
default:
    printf("Opção inválida!\n");

    break;
}






return 0;

}