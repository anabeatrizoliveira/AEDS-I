//Considerei um pedido como um lanche mais uma bebida
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
float codigo1, codigo2, preco, quantidade1, quantidade2;
printf("Digite o código do lanche que você irá pedir: \n100- Cachorro Quente \n101- Bauru Simples \n102- Bauru com Ovo \n103- Hamburguer \n104- Cheeseburguer\n");
scanf("%f", &codigo1);
printf("Digite a quantidade de lanches: ");
scanf("%f", &quantidade1);
printf("Digite o código do que você irá beber: \n105- Suco \n106- Refrigerante\n");
scanf("%f", &codigo2);
printf("Digite a quantidade de bebidas: ");
scanf("%f", &quantidade2);
if((codigo1==100)&&(codigo2==105)){
preco=1.2*quantidade1+2.2*quantidade2;
printf("O valor total do pedido é igual a R$%.2f", preco);
}
else if((codigo1==100)&&(codigo2==106)){
preco=1.2*quantidade1+1.0*quantidade2;
printf("O valor total do pedido é igual a R$%.2f", preco);
}
else if((codigo1==101)&&(codigo2==105)){
preco=1.3*quantidade1+2.2*quantidade2;
printf("O valor total do pedido é igual a R$%.2f", preco);
}
else if((codigo1==101)&&(codigo2==106)){
preco=1.3*quantidade1+1.0*quantidade2;
printf("O valor total do pedido é igual a R$%.2f", preco);
}
else if((codigo1==102)&&(codigo2==105)){
preco=1.5*quantidade1+2.2*quantidade2;
printf("O valor total do pedido é igual a R$%.2f", preco);
}
else if((codigo1==102)&&(codigo2==106)){
preco=1.5*quantidade1+1.0*quantidade2;
printf("O valor total do pedido é igual a R$%.2f", preco);
}
else if((codigo1==103)&&(codigo2==105)){
preco=1.2*quantidade1+2.2*quantidade2;
printf("O valor total do pedido é igual a R$%.2f", preco);
}
else if((codigo1==103)&&(codigo2==106)){
preco=1.2*quantidade1+1.0*quantidade2;
printf("O valor total do pedido é igual a R$%.2f", preco);
}
else if((codigo1==104)&&(codigo2==105)){
preco=1.7*quantidade1+2.2*quantidade2;
printf("O valor total do pedido é igual a R$%.2f", preco);
}
else if((codigo1==104)&&(codigo2==106)){
preco=1.7*quantidade1+1.0*quantidade2;
printf("O valor total do pedido é igual a R$%.2f", preco);
}
else {
printf("Digite valores válidos.");
}
return 0;
}
