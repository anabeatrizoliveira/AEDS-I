#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
char nome [20], sobrenome[20], nometodo[40];
int i, j=0;
setbuf(stdin, NULL);
printf("Digite seu nome: ");
gets(nome);
setbuf(stdin, NULL);
printf("Digite seu sobrenome: ");
gets(sobrenome);
strcat(nometodo, nome);
strcat(nometodo, sobrenome);
for(i=0; i<40; i++){
    if(nometodo[i]!='\0'){
        j++;
    }
}
printf("%i\n", j);
printf("O nome todo da pessoa é: %s.\nA primeira letra do nome é %c.\nA última letra do sobrenome é: %c.", nometodo, nometodo[0], nometodo[j-1]);
    return 0;
}
