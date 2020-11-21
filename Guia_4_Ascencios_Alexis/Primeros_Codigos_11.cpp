#include<stdio.h>
#include <stdlib.h>

int main()
{
float peso=0,altura=0,imc=0;
printf("ingrese su peso\n");
scanf("%f",&peso);
printf("Ingrese su altura\n");
scanf("%f",&altura);
imc=peso/(altura*altura);
if (imc<20)
{
printf("bajo de peso\n");
}
else{
if (imc<=25)
{
printf("peso ideal\n");
}
else
{
printf("excedido de peso\n");
}
}
return 0;
}
