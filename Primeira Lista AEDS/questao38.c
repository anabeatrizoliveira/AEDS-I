#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int dia, mes, ano;
printf("Digite o número de um dia: ");
scanf("%i", &dia);
printf("Digite número de um mês: ");
scanf("%i", &mes);
printf("Digite número de um ano: ");
scanf("%i", &ano);
if ((dia<=29)&&(mes==2)&&((ano%4==0)&&(ano%100!=0))||(ano%400==0)){
printf("Esta data é válida.");
}
else if((dia>29)&&(mes==2)&&((ano%4==0)&&(ano%100!=0))||(ano%400==0)){
printf("Digite uma data válida.");
}
else if((dia<=31)&&(mes==1)){
printf("Esta data é válida.");
}
else if((dia>31)&&(mes==1)){
printf("Digite uma data válida.");
}
else if((dia<=28)&&(mes==2)){
printf("Esta data é válida.");
}
else if((dia>28)&&(mes==2)){
printf("Digite uma data válida.");
}
else if((dia<=31)&&(mes==3)){
printf("Esta data é válida.");
}
else if((dia>31)&&(mes==3)){
printf("Digite uma data válida.");
}
else if((dia<=30)&&(mes==4)){
printf("Esta data é válida.");
}
else if((dia>30)&&(mes==4)){
printf("Digite uma data válida.");
}
else if((dia<=31)&&(mes==5)){
printf("Esta data é válida.");
}
else if((dia>31)&&(mes==5)){
printf("Digite uma data válida.");
}
else if((dia<=30)&&(mes==6)){
printf("Esta data é válida.");
}
else if((dia>30)&&(mes==6)){
printf("Digite uma data válida.");
}
else if((dia<=31)&&(mes==7)){
printf("Esta data é válida.");
}
else if((dia>31)&&(mes==7)){
printf("Digite uma data válida.");
}
else if((dia<=31)&&(mes==8)){
printf("Esta data é válida.");
}
else if((dia>31)&&(mes==8)){
printf("Digite uma data válida.");
}
else if((dia<=30)&&(mes==9)){
printf("Esta data é válida.");
}
else if((dia>30)&&(mes==9)){
printf("Digite uma data válida.");
}
else if((dia<=31)&&(mes==10)){
printf("Esta data é válida.");
}
else if((dia>31)&&(mes==10)){
printf("Digite uma data válida.");
}
else if((dia<=30)&&(mes==11)){
printf("Esta data é válida.");
}
else if((dia>30)&&(mes==11)){
printf("Digite uma data válida.");
}
else if((dia<=31)&&(mes==12)){
printf("Esta data é válida.");
}
else if((dia>31)&&(mes==12)){
printf("Digite uma data válida.");
}
else if(mes>12){
printf("Digite uma data válida.");
}
return 0;
}
