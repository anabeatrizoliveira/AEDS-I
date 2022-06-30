#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int idade, tempo;
printf("Digite sua idade: ");
scanf("%i", &idade);
printf("Digite o tempo de serviço: ");
scanf("%i", &tempo);
if((idade>=65)||(tempo>=35)||((idade>=60)&&(tempo>=25))){
printf("Você pode se aposentar");
}
else {
printf("Você não pode se aposentar");
}
return 0;
}
