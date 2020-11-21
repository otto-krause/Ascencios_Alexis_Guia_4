#include<stdio.h>
#include <stdlib.h>

int main()
{
int num1=0,num2=0;
printf("Ingrese dos numeros \n");
scanf("%d %d",&num1,&num2);
if (num1>num2)
{
printf("El mayor es %d\n", num1);
}
else{
if (num1==num2){printf("Los numeros son iguales\n");}
else{printf("El mayor es %d\n",num2);}
}
return 0;
}
