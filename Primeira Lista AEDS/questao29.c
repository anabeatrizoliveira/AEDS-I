#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int r1, r2, r3, r4, r5, certas, erradas;
certas=0;
erradas=0;
printf("10+68=");
scanf("%i", &r1);
if(r1==78){
++certas;
}
printf("26+17=");
scanf("%i", &r2);
if(r2==43){
++certas;
}
printf("49+11=");
scanf("%i", &r3);
if(r3==60){
++certas;
}
printf("19+36=");
scanf("%i", &r4);
if(r4==55){
++certas;
}
printf("70+25=");
scanf("%i", &r5);
if(r5==95){
++certas;
}
erradas=5-certas;
printf("\n\n10+68=78\n26+17=43\n49+11=60\n19+36=55\n70+25=95\nVocê acertou %i e errou %i.", certas, erradas);
return 0;
}
