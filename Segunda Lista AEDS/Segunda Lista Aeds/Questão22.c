#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int i, nota, media;
media=0;
i=0;
while(i>-1){
    printf("Escreva o valor v�lido de sua nota %i",i+1);
    scanf("%i", &nota);
    media=media+nota;
    i++;
    if((nota<10)&&(nota>20)){
        break;
    }
}
media=media/i+1;
printf("A m�dia das suas notas �: %i.", media);

return 0;
}
