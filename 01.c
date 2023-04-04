#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
   float a,b,media;

   
   printf("Informe o primeiro valor: ");
   scanf("%f",&a);
   printf("Informe o segundo valor: ");
   scanf("%f",&b);
   media = (a+b)/2;
   
   printf("A media dos numeros lidos e: %.2f",media);
   getch();
}
