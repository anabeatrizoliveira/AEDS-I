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
printf("Digite sua altura em centímetos: ");
scanf("%i", &altura);
if((altura<120)&&(peso<60.0)){
printf("Sua classificação é A.");
}
else if((altura>=120)&&(altura<=120)&&(peso<60)){
printf("Sua classificação é B.");
}
else if((altura>170)&&(peso<60)){
printf("Sua classificação é C.");
}
else if((altura<120)&&(peso>=60)&&(peso<=90)){
printf("Sua classificação é D.");
}
else if((altura>=120)&&(altura<=170)&&(peso>=60)&&(peso<=90)){
printf("Sua classificação é E.");
}
else if((altura>170)&&(peso>=60)&&(peso<=90)){
printf("Sua classificação é F.");
}
else if((altura<120)&&(peso>90)){
printf("Sua classificação é G.");
}
else if((altura>=120)&&(altura<=170)&&(peso>90)){
printf("Sua classificação é H.");
}
else if((altura>170)&&(peso>90)){
printf("Sua classificação é H.");
}
return 0;
}
