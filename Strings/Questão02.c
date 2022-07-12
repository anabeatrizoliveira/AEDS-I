#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
char a[20], b;
int i, j=0;
printf("Digite uma string: ");
gets(a);
printf("Digite um caractere: ");
scanf("%c", &b);
for(i=0; i<20; i++){
    if((a[i]==b)&&(a[i]!='\0')){
        j++;
    }
}
printf("O caractere %c apareceu %i na string.", b, j);
    return 0;
}

