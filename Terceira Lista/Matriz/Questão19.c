#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int a[5][4], i, j, media=0, maior=0, matriculamaior=0, soma=0;
printf("Considere a primeira informação solicitada como o número de matrícula, a segunda informação como a média das provas e a terceira como a média dos trabalhos.\n");
for(i=0; i<5; i++){
    for(j=0; j<3; j++){
        printf("Digite a %iª informação do %iº aluno: ",j+1, i+1);
        scanf("%i", &a[i][j]);
    }
}
for(i=0; i<5; i++){
    a[i][3]=a[i][1]+a[i][2];
    if(a[i][3]>maior){
        maior=a[i][3];
        matriculamaior=a[i][0];
    }
    soma=soma+a[i][3];
}
media=soma/5;
printf("A matrícula que obteve a maior nota final foi %i, a média aritmética foi %i.", matriculamaior, media);
return 0;
}
