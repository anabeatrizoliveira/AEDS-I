#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
float nota, faltas;
printf("Digite a nota obtida: ");
scanf("%f", &nota);
printf("Digite a quantidade de faltas: ");
scanf("%f", &faltas);
if((nota>8.9)&&(nota<=10.0)&&(faltas<=20)){
printf("Seu conceito � A.");
}
else if((nota>7.4)&&(nota<9.0)&&(faltas<=20)){
printf("Seu conceito � B.");
}
else if((nota>5.0)&&(nota<7.5)&&(faltas<=20)){
printf("Seu conceito � C.");
}
else if((nota>3.9)&&(nota<5.20)&&(faltas<=20)){
printf("Seu conceito � D.");
}
else if((nota>=0)&&(nota<4.0)&&(faltas<=20)){
printf("Seu conceito � E.");
}
else if((nota>8.9)&&(nota<=10.0)&&(faltas>20)){
printf("Seu conceito � B.");
}
else if((nota>7.4)&&(nota<9.0)&&(faltas>20)){
printf("Seu conceito � C.");
}
else if((nota>5.0)&&(nota<7.5)&&(faltas>20)){
printf("Seu conceito � D.");
}
else if((nota>3.9)&&(nota<5.20)&&(faltas>20)){
printf("Seu conceito � E.");
}
else if((nota>=0)&&(nota<4.0)&&(faltas>20)){
printf("Seu conceito � E.");
}
return 0;
}
