#include<stdio.h>

int main(){

    int opcao, agencia, conta;
    float saldo = 1000.00, valor;
    char banco[20];

    printf("Escolha uma opção: \n");
    printf("1. Verificar saldo. \n");
    printf("2. Depositar. \n");
    printf("3. Sacar. \n");
    scanf("%d",&opcao); // precisa por número pro "case" ler a instrução.

    switch (opcao) 
    {
    case 1:
        printf("Saldo: %.2f\n", saldo);
        break;
    case 2:
        printf("Digite o valor: \n");
        scanf("%f", &valor);
        printf("Informe o banco: \n");
        scanf("%s", banco);
        printf("Informe a agência: \n");
        scanf("%d", &agencia);
        printf("Informe a conta: \n");
        scanf("%d", &conta);
        printf("Depósito concluído!\n");
        break;
    case 3: 
        printf("Digite o valor a sacar: \n");
        scanf("%f", &valor);
        printf("Aproveite!\n");
        break;   
    default:
        printf("Opção inválida!\n");
        break;
    }
    

    return 0;


}