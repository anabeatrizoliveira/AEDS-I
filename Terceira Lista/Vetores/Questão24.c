#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int aluno[10], altura[10], i, maior, menor, alunomenor, alunomaior;
for(i=0; i<10; i++){
    printf("Digite o n�mero do Aluno: ");
    scanf("%i", &aluno[i]);
    printf("Digite, em cent�metros, a altura do aluno: ");
    scanf("%i", &altura[i]);
    if(i==0){
        maior=altura[i];
        menor=altura[i];
        alunomenor=aluno[i];
        alunomaior=aluno[i];
    }
    else if(maior<altura[i]){
        maior=altura[i];
        alunomaior=aluno[i];
    }
    else if(menor>altura[i]){
        menor=altura[i];
        alunomenor=aluno[i];
    }
}
printf("O menor aluno � o de n�mero %i medindo %i cent�metros.\nO maior aluno � o de n�mero %i medindo %i cent�metros.", alunomenor, menor, alunomaior, maior);
  return 0;
}
