#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

main()
{
	int num;
	float nh, vh, sl;
	printf("Informe o numero do funcionario: \n");
	scanf("%d",&num);
	printf("Informe o numero de horas trabalhadas: \n");
	scanf("%f",&nh);
	printf("Informe o valor da hora de trabalho: \n");
	scanf("%f",&vh);
	sl = nh*vh;
	printf("O funcionario de numero %d tera salario de R$ %.2f",num,sl);
	getch();
}
