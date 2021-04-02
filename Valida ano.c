#include <stdio.h>
#include <conio.h>
int main (){
	int ano, mes, dia, continua;
	do{
		system("cls");
		printf("Digite dia, m%cs e ano, respectivamente: ", 136);
		scanf("%d %d %d", &dia, &mes, &ano);
		while((mes < 1) && (mes > 12)){
		printf("Data inválida, mês deve estar entre 01(janeiro) e 12(dezembro). Digite o m%cs novamente.", 136);
		scanf("%d", mes);
		}
	printf("Data v%clida.\n\n", 160);
	printf("Digite zero '0' para sair e qualquer tecla ara continuar testando.");
	scanf("%d", &continua);
	}while(continua != 0);	
	getch();
	system("pause");
	return 0;
	
}
