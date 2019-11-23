#include<stdio.h>
#include<conio.h>
main ()
{
int a,b; 
printf("ingresa el valor: ");
scanf("%d",&a); 
b=a%2;
if (b==0)
printf("es par");
else if (b==1)
printf ( "es impar");
getch();
}

