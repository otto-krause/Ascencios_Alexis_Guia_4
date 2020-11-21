#include<stdio.h>
#include <stdlib.h>

int main()
{
int p=0,a=0,b=0,h=0;
printf("Ingrese la base del rectangulo \n");
scanf("%d",&b);
printf("Ingrese la altura del rectangulo \n");
scanf("%d",&h);
p=2*b+2*h;
a=b*h;
printf("El perimetro es %d\n",p);
printf("El area es %d\n",a);
return 0;
}
