#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int a[5], b[5], cod, i, j;
j=0;
for(i=0; i<5; i++){
    printf("Digite um número inteiro: ");
    scanf("%i", &a[i]);
}
printf("Digite o código do que deseja fazer com o vetor.\n0- Finalizar o Programa\n1- Vetor em ordem direta\n2- Vetor em ordem inversa\n");
scanf("%i", &cod);
if(cod==0){
    system("pause");
}
else if(cod==1){
    for(i=0; i<5; i++){
        printf("%i\n", a[i]);
    }
}
else if(cod==2){
    for(i=4; i>=0; i--){
        b[i]=a[j];
        j++;
    }
    for(i=0; i<5; i++){
        printf("%i\n", b[i]);
}
}
else{
    printf("Digite um código válido.");
}
return 0;
}
