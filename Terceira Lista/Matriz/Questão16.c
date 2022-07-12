#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <time.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int i ,j, x, matricula[3], resultado[3], cont=0, alunos[3][10], gabarito[10];
printf("Digite o número que corresponde à resposta colocada na prova: \n1-a\n2-b\n3-c\n4-d\n");
for(i=0; i<3; i++){
        printf("Digite a matrícula do aluno: ");
        scanf("%i", &matricula[i]);
    for(j=0; j<10; ){
        printf("Digite a %iª questão do %iº aluno: ", j+1, i+1);
        scanf("%i", &alunos[i][j]);
        if((alunos[i][j]>0)&&(alunos[i][j]<5)){
            j++;
        }
    }
}
for(x=0; x<10; x++){
    printf("Digite o gabarito da prova: ");
    scanf("%i", &gabarito[x]);

}
for(i=0; i<3; i++){
    x=0;
    cont=0;
    for(j=0; j<10; j++){
            if(alunos[i][j] == gabarito[x]){
            cont++;
            }
            x++;

    }
resultado[i]=cont;
}
for(i=0; i<3; i++){
        printf("O aluno com a matrícula %i e as respostas:\n", matricula[i]);
    for(j=0; j<10; j++ ){
            printf("%i = %i\n", j+1, alunos[i][j]);
            }
    if(resultado[i]>6){
        printf("O aluno foi aprovado com nota %i.\n\n", resultado[i]);
    }
    else if (resultado[i]<=6){
        printf("Foi reprovado com nota %i.\n\n", resultado[i]);
    }


    }

return 0;
}
