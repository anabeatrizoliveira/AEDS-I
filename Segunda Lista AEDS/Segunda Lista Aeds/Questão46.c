#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int x, i, chute;
x=1+(rand()%1000);
i=0;
while(chute!=x){
    printf("Digite um n�mero de 1 a 1000: ");
    scanf("%i", &chute);
    i++;
    if(chute==x){
        break;
    }
}
printf("Parab�ns! Voc� acertou o n�mero %i com %i tentativas.", x, i);
return 0;
}
