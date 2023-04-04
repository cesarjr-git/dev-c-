#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	int a, qua;
	
	printf("Informe um valor inteiro: ");
	scanf("%d",&a);
	qua = pow(a,2);
	printf("%d elevado ao quadrado = %d\n",a,qua);
	getch();
}
