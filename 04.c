#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
   float n1,n2,m4,m6,media;


   printf("Informe o primeiro valor: ");
   scanf("%f",&n1);
   printf("Informe o segundo valor: ");
   scanf("%f",&n2);
   m4 = n1*4;
   m6 = n2*6;
   media = (m4+m6)/2;

   printf("Os numeros lidos foram: %.2f e %.2f\n",n1,n2);
   printf("%.2f x 4 = %.2f e %.2f x 6  = %.2f\n",n1,m4,n2,m6);
   printf("A media e: %.2f",media);
   getch();
}

