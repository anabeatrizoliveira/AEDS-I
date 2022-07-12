#include <stdio.h>
#include <locale.h>
struct banda{
char nome[10], genero[10];
int integrantes, ranking;
};
int main()
{
setlocale(LC_ALL, "Portuguese");
struct banda b[5];
int i;
for(i=0; i<5; i++){
setbuf(stdin, NULL);
printf("Digite o nome da banda: ");
gets(b[i].nome);
printf("Digite o gênero da banda: ");
gets(b[i].genero);
printf("Digite quantos integrantes tem a banda: ");
scanf("%i", &b[i].integrantes);
printf("Digite qual o ranking da banda entre suas favoritas: ");
scanf("%i", &b[i].ranking);
}
for(i=0; i<5; i++){
	if(b[i].ranking==1){
		printf("Sua banda favorita é a: %s", b[i].nome);
	}
}
return 0;
}
