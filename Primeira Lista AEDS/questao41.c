#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main (){
float altura;
float peso;
float imc;
printf("Digite uma altura: ");
scanf("%f", &altura);
printf("Digite um peso: ");
scanf("%f", &peso);
imc=peso/(altura*altura);
if(imc<18.5){
printf("Seu imc � de %f.\nAbaixo do peso.", imc);
}
else if((imc>=18.5)&&(imc<25.0)){
printf("Seu imc � de %f.\nSaud�vel.", imc);
}
else if((imc>=25.0)&&(imc<30.0)){
printf("Seu imc � de %f.\nPeso em excesso.", imc);
}
else if((imc>=30.0)&&(imc<35.0)){
printf("Seu imc � de %f.\nObesidade Grau I.", imc);
}
else if((imc>=35.0)&&(imc<40.0)){
printf("Seu imc � de %f.\nObesidade Grau II(severa).", imc);
}
else if(imc>=40.0){
printf("Seu imc � de %f.\nObesidade Grau III(m�rbida).", imc);
}
return 0;
}
