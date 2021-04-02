#include <stdio.h>
#include <conio.h>
int main (){
	int mes, continua;
	do{
		system("cls");
		printf("Digite m%cs: \n", 136);
		scanf("%d", &mes);
		while((mes < 1) || (mes > 12)){
		printf("Data inválida, mês deve estar entre 01(janeiro) e 12(dezembro). Digite o m%cs novamente.", 136);
		scanf("%d", mes);
		}
	printf("Digite zero '0' para sair e qualquer tecla ara continuar testando.");
	scanf("%d", &continua);
	}while(continua != 0);	
	getch();
	system("pause");
	return 0;
	
}
