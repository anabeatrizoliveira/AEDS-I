#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int peso, altura;
printf("Digite seu peso: ");
scanf("%i", &peso);
printf("Digite sua altura em cent�metos: ");
scanf("%i", &altura);
if((altura<120)&&(peso<60.0)){
printf("Sua classifica��o � A.");
}
else if((altura>=120)&&(altura<=120)&&(peso<60)){
printf("Sua classifica��o � B.");
}
else if((altura>170)&&(peso<60)){
printf("Sua classifica��o � C.");
}
else if((altura<120)&&(peso>=60)&&(peso<=90)){
printf("Sua classifica��o � D.");
}
else if((altura>=120)&&(altura<=170)&&(peso>=60)&&(peso<=90)){
printf("Sua classifica��o � E.");
}
else if((altura>170)&&(peso>=60)&&(peso<=90)){
printf("Sua classifica��o � F.");
}
else if((altura<120)&&(peso>90)){
printf("Sua classifica��o � G.");
}
else if((altura>=120)&&(altura<=170)&&(peso>90)){
printf("Sua classifica��o � H.");
}
else if((altura>170)&&(peso>90)){
printf("Sua classifica��o � H.");
}
return 0;
}
