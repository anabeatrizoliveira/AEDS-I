//Nesta que o total das provas com o peso darão 100 pontos e a aprovação como 60% (60 pontos)
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
float n1, n2, n3, media, pontos;
printf("Digite a nota obtida na primeira prova: ");
scanf("%f", &n1);
printf("Digite a nota obtida na segunda prova: ");
scanf("%f", &n2);
printf("Digite a nota obtida na terceira prova: ");
scanf("%f", &n3);
media=(n1*1+n2*1+n3*2)/(1+1+2);
pontos=n1+n2+(n3*2);
if(pontos>=100*0.6){
printf("Parabéns! Você foi aprovado, a média ponderada de suas notas é : %.2f. E seus total de pontos são: %.2f", media, pontos);
}
else{
printf("Infelizmente sua nota não é suficiente para a aprovação, você foi reprovado. Sua média foi de: %.2f, e seus pontos foram %.2f", media, pontos);
}
return 0;
}
