#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int idade, tempo;
printf("Digite sua idade: ");
scanf("%i", &idade);
printf("Digite o tempo de servi�o: ");
scanf("%i", &tempo);
if((idade>=65)||(tempo>=35)||((idade>=60)&&(tempo>=25))){
printf("Voc� pode se aposentar");
}
else {
printf("Voc� n�o pode se aposentar");
}
return 0;
}
