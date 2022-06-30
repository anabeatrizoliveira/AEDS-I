#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
int
main ()
{
setlocale (LC_ALL, "Portuguese");
int n, cont;
cont=0;
printf("Digite um número: ");
scanf("%i", &n);
for(int i=2;i<n; i++){
    if(n%i==0){
        cont++;
    }
}
if(cont>0){
    printf("Este número não é primo.");
}
else{
    printf("Este número é primo.");
}
return 0;
}
