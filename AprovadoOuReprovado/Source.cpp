#include <stdio.h>
#include <stdlib.h>
//Ler uma nota e verificar se foi aprovado ou reprovado,considerando a nota de aprovação (6,0)

int main (){
	float n1=0;
	printf("\nDigite a nota do aluno: ");
	scanf("%f",&n1);

	if (n1>=6)
		printf("\nAluno Aprovado\n\n");
	else
		printf("\nAluno Reprovado\n\n");

	system("pause");
n1=0;
}