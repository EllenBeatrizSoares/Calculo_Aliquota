#include<stdlib.h>//biblioteca
#include<stdio.h>//biblioteca
#include<string.h>//biblioteca
#include<locale.h>//biblioteca

//variaveis
char nome[20];
float salario;
float aliquota = 0;
float imposto = 0;
float final = 0;

void comeco()//fun��o inicio do codigo
{
	printf("\t\t\t\t\tBem vindo ao sistema de calcul aliquota!\n\n");//apresenta��o
	printf("\n\tBase de Calculo Mensal em R$ | Aliquota \n");//tabela
	printf("\t At� 1.637,11                |     -     \n");
	printf("\t De 1.637,12 at� 2.453,50    |     7,5   \n");
	printf("\t De 2.453,51 at� 3.271,38    |    15,0   \n");
	printf("\t De 3.271,39 at� 4.087,65    |    22,5   \n");
	printf("\t Acima de 4.087,65           |    27,5   \n");
}
	void dados()//fun��o captura de dados
	{
		printf("\n\nDigite seu nome: ");
		gets_s(nome);//2 horas pra descobrir que tinha que trocas scanf_s para gets_s
		printf("Digite seu salario: ");
		scanf_s("%f", &salario);
		printf("\n\n");
	}
	void valida()//fun��o calculo de renda
	{
		if (salario <= 1637.11)//valor maximo para isen��o
		{
			aliquota = 0.0;//porcentagem de desconto
			final = salario;
		}
		else if (salario >= 1637.12 && salario <= 2453.50)//diferen�a de aliquota
		{
			aliquota = 7.5;//porcentagem de desconto
			imposto = ((salario * aliquota) / 100);
			final = salario - imposto;
		}
		else if (salario >= 2453.51 && salario <= 3271.38)//diferen�a de aliquota
		{
			aliquota = 15.0;//porcentagem de desconto
			imposto = ((salario * aliquota) / 100);
			final = salario - imposto;
		}
		else if (salario >= 3271.39 && salario <= 4087.65)//diferen�a de aliquota
		{
			aliquota = 27.5;//porcentagem de desconto
			imposto = ((salario * aliquota) / 100);
			final = salario - imposto;
		}
	}

void mostra()//fun�a� de apresenta��o
{
	printf("Nome: %s \n", nome);
	printf("Salario: %.2f \n", salario);
	printf("Aliquota: %.1f \n", aliquota);
	printf("Imposto: %.2f \n", imposto);
	printf("Salario Final: %.2f \n\n", final);
}
int main()
{
	comeco();//chama as fun�oes
	dados();//chama as fun�oes
	valida();//chama as fun�oes
	mostra();//chama as fun�oes
}