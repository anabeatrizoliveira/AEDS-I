#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int a[5][4], i, j, media=0, maior=0, matriculamaior=0, soma=0;
printf("Considere a primeira informa��o solicitada como o n�mero de matr�cula, a segunda informa��o como a m�dia das provas e a terceira como a m�dia dos trabalhos.\n");
for(i=0; i<5; i++){
    for(j=0; j<3; j++){
        printf("Digite a %i� informa��o do %i� aluno: ",j+1, i+1);
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
printf("A matr�cula que obteve a maior nota final foi %i, a m�dia aritm�tica foi %i.", matriculamaior, media);
return 0;
}
