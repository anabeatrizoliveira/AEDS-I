#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
float a, b, c;
printf("Digite o primeiro lado do tri�ngulo: ");
scanf("%f", &a);
printf("Digite o segundo lado do tri�ngulo: ");
scanf("%f", &b);
printf("Digite o terceiro lado do tri�ngulo: ");
scanf("%f", &c);
if ((a<b+c)&&(b<a+c)&&(c<a+b)) {
printf("O tri�ngulo � v�lido.\n");
if((a==b)&&(a==c)&&(b==c)){
printf("E este tri�ngulo � equil�tero.");
}
else if((a==b)||(b==c)||(a==c)){
printf("E este tri�ngulo � is�celes.");
}
else if(a!=b!=c){
printf("E este tri�ngulo � escaleno");
}
}
else {
    printf("Estes valores n�o s�o v�lidos para um tri�ngulo.");
}

return 0;
}
