#include<stdio.h>
#include <stdlib.h>

int main()
{
float Sup1,Pob1,Sup2,Pob2,Sup3,Pob3,Dpob1,Dpob2,Dpob3;
printf("Ingrese la superficie y poblacion del primer pais");
scanf("%f%f",&Sup1,&Pob1);
Dpob1=Pob1/Sup1;
printf("Ingrese la superficie y poblacion del segundo pais");
scanf("%f%f",&Sup2,&Pob2);
Dpob2=Pob2/Sup2;
printf("Ingrese la superficie y poblacion del tercer pais");
scanf("%f%f",&Sup3,&Pob3);
Dpob3=Pob3/Sup3;

if(Dpob1>Dpob2)
{
printf("el pais mas poblado es el primero");
}
else
{
if (Dpob2>Dpob3)
{
printf("el pais mas poblado es el segundo");
}
else
{
printf("el pais mas poblado es el tercero");
}
}
return 0;
}
