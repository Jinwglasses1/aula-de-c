#include<stdio.h>

int main(){

    int index; // O index é o índice da matriz. O usuário digita o número que corresponde a cada linha da matriz, indo de 0 a 2.

    char * nomesAlunos [3][3] = {   // A matriz tem tamanho 3x3

      {"Aluno 0","Pt: 30","Mat: 90"},
      {"Aluno 1","Pt: 60","Mat: 60"},
      {"Aluno 2","Pt: 90","Mat: 30"}   

    };

    printf("Digite o número do aluno para ver as suas notas.... \n");
    printf("Para o aluno 0, digite 0\n");
    printf("Para o aluno 1, digite 1\n");
    printf("Para o aluno 2, digite 2\n");

    scanf("%d", &index);

    printf("As notas do %s são: %s e %s\n", nomesAlunos[index][0], nomesAlunos[index][1], nomesAlunos[index][2]);


    return 0;
}