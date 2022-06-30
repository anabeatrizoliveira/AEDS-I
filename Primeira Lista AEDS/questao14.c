#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
float tl, as, ef, media;
printf("Digite a nota de seu trabalho de laboratório: ");
scanf("%f", &tl);
printf("Digite a nota de sua avaliação semestral: ");
scanf("%f", &as);
printf("Digite a nota de seu exame final: ");
scanf("%f", &ef);
media=(tl*2+as*3+ef*5)/(2+3+5);
if((media>=0)&&(media<=2.9)){
printf("Infelizmente sua nota não foi suficiente para a aprovação nem para está apto para a reprovação. Sua média foi de: %f", media);
}
else if((media<=3.0)&&(media<=4.9)){
printf("Sua média foi de: %.2f, e você está de recuperação", media);
}
else {
printf("Parabéns! Você foi aprovado com média %.2f", media);
}
return 0;
}
