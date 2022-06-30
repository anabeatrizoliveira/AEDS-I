#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int idade;
printf("Digite a idade do atleta: ");
scanf("%d", &idade);
if ((idade>=5)&&(idade<=7)){
printf("Este atleta e Infantil A");
}
else if ((idade>=8)&&(idade<=10)){
printf("Este atleta e Infantil B");
}
else if ((idade>=11)&&(idade<=13)){
printf("Este atleta e Juvenil A");
}
else if ((idade>=14)&&(idade<=17)){
printf("Este atleta e Juvenil B");
}
else if (idade>=18){
printf("Este atleta e Senior");
}
else{
printf("Este atleta nao possui nenhuma das idades requisitadas.");
}
return 0;
}
