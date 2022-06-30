#include<stdio.h>
int	main (){
float raio, area, perimetro;
printf ("Digite o raio de um circulo: ");
scanf ("%f", &raio);
area=3.14*(raio*raio);
perimetro=2*3.14*raio;
printf("Um circulo de raio %f possui area igual a %f e perimetro igual a %f ", raio, area, perimetro);
return 0 ;
}
