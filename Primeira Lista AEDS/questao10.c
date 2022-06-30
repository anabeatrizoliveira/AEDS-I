#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
float altura, ideal, genero;
printf("Digite sua altura: ");
scanf("%f", &altura);
printf("Digite seu gênero, se for mulher digite '1', caso for homem digite '2'.");
scanf("%f", &genero);
if(genero==1){
ideal=(62.1*altura)-44.7;
printf("Seu peso ideal é de: %.2f kg.", ideal);
}
else if (genero==2){
ideal=(72.7*altura)-58;
printf("Seu peso ideal é de: %.2f kg.", ideal);
}
else{
printf("Digite um gênero válido no formato para computar.");
}
return 0;
}
