#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <time.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int i, j, x, resultado[5], cont=0, alunos[5][10], gabarito[10];
printf("Digite o número que corresponde à resposta colocada na prova: \n1-a\n2-b\n3-c\n4-d\n");
for(i=0; i<5; i++){
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
for(i=0; i<5; i++){
    x=0;
    cont=0;
    for(j=0; j<10; j++){
            if(alunos[i][j] == gabarito[x]){
            cont++;
            }
            x++;

    }
resultado[i]=cont;
printf("A nota do %iº aluno valendo 10 é igual a %i.\n", i+1, resultado[i]);
}
return 0;
}
