#include<stdio.h>
#include <stdlib.h>

int main()
{
int n1=0,n2=0,n3=0;
printf("Ingresa 3 numeros\n");
scanf("%d %d %d",&n1,&n2,&n3);
if (n1<n2&&n1<n3&&n2<n3)
{
printf("Ascendente\n");
}
return 0;
}
