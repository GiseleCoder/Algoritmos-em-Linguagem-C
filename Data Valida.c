/*Ex.15 - Data v�lida, com verifica��o de ano bissesto*/
#include <stdio.h>
#include <conio.h>

int main(){
	int dia, mes, ano, continua;
	do{
		system("cls");
		printf("Digite dia, m%cs e ano, respectivamente: ", 136);
		scanf("%d %d %d", &dia, &mes, &ano);
		if((mes < 0) && (mes > 12)){
			printf("Data inv�lida, m�s deve estar entre 1(janeiro) a 12(dezembro). Digite o novamente.");
			scanf("%d", mes);
		}
		else{
			switch(mes){
			case 2:
					if (((ano % 4 == 0) || (ano % 400 == 0)) && (ano % 100 != 0)){
						printf("Ano Bissexto");
						if((dia < 1) && (dia > 29)){
						printf("Data inv�lida, os dias de anos bissextos v�o de 1 a 29 em fevereiro. Digite o dia novamente.");
						scanf("%d", dia);
						}
					}else
						{
						if((dia < 1 ) && (dia > 28)){
						printf("Data inv�lida, em anos n�o bissextos os dias v�o de 1 a 28 em fevereiro. Digite o dia novamente.");
						scanf("%d", dia);
						}else{
							printf("Data valida");
						}break;

			case 4:;
			case 6:;
			case 8:;
			case 9:;
			case 11:
					if((dia < 1 ) && (dia > 31)){
					printf("Data inv�lida, este m�s tem de 1 a 30. Digite o dia novamente.");
					scanf("%d", dia);
					}else{
						printf("Data vlida");
					}break;
/*			case 1:;
			case 3:;
			case 5:;
			case 7:;
			case 10:;
			case 12:;*/
			default:
					if((dia < 1 ) && (dia >= 31)){
					printf("Data inv�lida, os meses t�m no m�ximo 31 dias. Digite o novamente.");
					scanf("%d", dia);
					}else{
						printf("Data V�lida.");
					}break;
	}}
	printf("Digite zero '0' para sair e qualquer tecla ara continuar testando.");
	scanf("%d", &continua);
	
}while(continua != 0);	
	getch();
	system("pause");
	return 0;
}

