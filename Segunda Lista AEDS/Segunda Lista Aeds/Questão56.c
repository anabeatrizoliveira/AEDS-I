#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
setlocale(LC_ALL, "Portuguese");
int soma, i, j, mod;
soma=0;
for(i=0;i<2000000;i++){
        mod=1;
    for(j=2;j<i;j++){
        if(i%j==0){
            mod=0;
        }
}
        if(mod==1){
    printf("%i é primo \n", i);
    soma=soma+i;

}
}
printf("Existem %i números primos neste intervalo.", soma);
    return 0;
}
