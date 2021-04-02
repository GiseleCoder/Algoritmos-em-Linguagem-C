/*Programa 15 Data válida, com verificação de ano bissesto.*/
#include <stdio.h>
#include <conio.h>

int main(){
	int ano, mes, dia, continua;
	char bissexto = 'n';
	do{
		system("cls");
		printf("Digite dia, m%cs e ano, respectivamente: ", 136);
		scanf("%d %d %d", &dia, &mes, &ano);
		while((mes < 1) || (mes > 12)){
		printf("Data inv%clida, m%cs deve estar entre 01(janeiro) e 12(dezembro). \nDigite o m%cs novamente:", 160, 136, 136);
		scanf("%d", &mes);
		system("cls");
		}
		if(((ano % 4 == 0) || (ano % 400 == 0)) && (ano % 100 != 0)){
			bissexto = 's';
			printf("Ano bissexto.");
		}
		else{
			printf("Ano n%co bissexto. ", 198);
		}
		if (mes == 2){
			if (bissexto == 's'){
				while((dia < 1) || (dia > 29)){
				printf("A data n%co %c v%clida, os dias de anos bissextos v%co de 1 a 29 em fevereiro. \nDigite o dia novamente: ", 198, 130, 160, 198);
				scanf("%d", &dia);
				}
				printf("\nA data %d.%d.%d %c v%clida.", dia, mes, ano, 130, 160);
			}else{
				while(dia > 28){
				printf("A data n%co %c v%clida, em anos n%co bissextos os dias compreendem de 1 a 28 em fevereiro. \nDigite o dia novamente: ", 198, 130, 160, 198);
				scanf("%d", &dia);
				}
				printf("\nA data %d.%d.%d %c v%clida.", dia, mes, ano, 130, 160, 198);
				}
			}else{
				if((mes == 4)|| (mes == 6) || (mes == 8) || (mes == 9) || (mes == 11)){
					while((dia < 1 ) || (dia >= 31)){
					printf("A data n%co %c v%clida, este m%cs tem de 1 a 30 dias. \nDigite o dia novamente: ", 198, 130, 160, 136);
					scanf("%d", &dia);
					}
					printf("\nA data %d.%d.%d %c v%clida.", dia, mes, ano, 130, 160);
				}
					else{
						while((dia < 1 ) || (dia > 31)){
						printf("A data n%co %c v%clida, os meses t%cm no m%cximo 31 dias. \nDigite o dia novamente: ", 198, 130, 160, 136, 160);
						scanf("%d", &dia);
						}
						printf("\nA data %d.%d.%d %c v%clida.", dia, mes, ano, 130, 160);
						}
				}
	printf("\n\nDigite 0 para continuar verifificando as datas ou qualquer tecla para sair.");
	scanf("%d", &continua);
	}while(continua == 0);
	getch();
	system("pause");
	return 0;	
}
