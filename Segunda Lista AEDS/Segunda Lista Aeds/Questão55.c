#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
setlocale(LC_ALL, "Portuguese");
int n, soma, i, j, mod, cont;
soma=0;
printf("Informe o in�cio: ");
scanf("%i", &n);
cont=0;
while(cont<n){
for(i=2;cont<n;i++){
mod=1;
for(j=2;j<i;j++){
if(i%j==0){
mod=0;
}
}
if(mod==1){
printf("%i � primo \n", i);
soma=soma+i;
cont++;
}
}
}
printf("A soma dos %i primeiros n�meros primos � igual a %i", n, soma);
return 0;
}
