#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
float nota[15], media;
media=0;
int i;
for(i=0; i<15; i++){
    printf("Digite a nota do %i� aluno: ", i+1);
    scanf("%f", &nota[i]);
    media=media+nota[i];
}
media=media/15;
printf("A m�dia geral dos 15 alunos � igual a: %.2f.", media);
return 0;
}
