#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
float tl, as, ef, media;
printf("Digite a nota de seu trabalho de laborat�rio: ");
scanf("%f", &tl);
printf("Digite a nota de sua avalia��o semestral: ");
scanf("%f", &as);
printf("Digite a nota de seu exame final: ");
scanf("%f", &ef);
media=(tl*2+as*3+ef*5)/(2+3+5);
if((media>=0)&&(media<=2.9)){
printf("Infelizmente sua nota n�o foi suficiente para a aprova��o nem para est� apto para a reprova��o. Sua m�dia foi de: %f", media);
}
else if((media<=3.0)&&(media<=4.9)){
printf("Sua m�dia foi de: %.2f, e voc� est� de recupera��o", media);
}
else {
printf("Parab�ns! Voc� foi aprovado com m�dia %.2f", media);
}
return 0;
}
