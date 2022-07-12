#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int notas[10][3], i, j, pior1=0, pior2=0, pior3=0;
for(i=0; i<10; i++){
    for(j=0; j<3; j++){
        printf("Digite a %iª nota do %iº aluno: ", j+1, i+1);
        scanf("%i", &notas[i][j]);
    }
}
for(i=0; i<10; i++){
    if((notas[i][1]<=notas[i][2])&&(notas[i][1]<=notas[i][3])){
        pior1++;
    }
    else if((notas[i][2]<=notas[i][3])&&(notas[i][2]<notas[i][1])){
        pior2++;
    }
    else if((notas[i][3]<notas[i][2])&&(notas[i][3]<notas[i][1])){
        pior3++;
    }
}
printf("%i alunos foram pior na primeira prova.\n%i alunos foram pior na segunda prova.\n%i alunos foram pior na segunda prova.\n", pior1, pior2, pior3);
return 0;
}
