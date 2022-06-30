#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
setlocale(LC_ALL, "Portuguese");
int n1, n2, soma, i, j, mod;
soma=0;
printf("Informe o início: ");
scanf("%i", &n1);
printf("Informe o fim: ");
scanf("%i", &n2);
for(i=n1+1;i<n2;i++){
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
printf("%i", soma);
    return 0;
}
