#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int n[5], maior, menor, i;
float media=0;
for(i=0; i<5; i++){
    printf("Digite o %iº valor: ", i+1);
    scanf("%i", &n[i]);
    if(i==0){
        maior=n[i];
        menor=n[i];
    }
    else if(maior<n[i]){
        maior=n[i];
    }
    else if(menor>n[i]){
        menor=n[i];
    }
    media=media+n[i];
}
for(i=0; i<5; i++){
        printf("%i\n", n[i]);
}
media=media/5;
printf("O maior número digitado foi: %i.\nO menor número digitado foi: %i. \nA média de todos números é: %.2f.", maior, menor, media);
return 0;
}
