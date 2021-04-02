/*Informar se é dia do rodízio baseado na placa do carro: Utilizar switch/case*/
#include <stdio.h>
#include <conio.h>
int main(){
	int placa = 0, continua;
	do{
	system("cls");
	printf("Digite o n%cmero do placa.\n\n", 163);
	scanf("%d", &placa);
	switch(placa%=10){
		case 1:;
		case 2: printf("\nSeu dia de rod%czio %c segunda-feira.\n\n", 161, 130); break;
		
		case 3:;
		case 4: printf("\nSeu dia de rod%czio %c ter%ca-feira.\n\n", 161, 130, 135); break;
		
		case 5:;
		case 6: printf("\nSeu dia de rod%czio %c quarta-feira.\n\n", 161, 130); break;
		
		case 7:;
		case 8: printf("\nSeu dia de rod%czio %c quinta-feira.\n\n", 161, 130); break;
		
		case 9:;
		case 0: printf("\nSeu dia de rod%czio %c sexta-feira.\n\n", 161, 130); break;
		
		default: printf("\nNúmero da placa inv%clido.\n\n", 163, 160); break;
	}
	printf("\nDigite 0 para continuar testando. \n");
	scanf("%d", &continua);
	}while(continua == 0);
	
getch();	
system("pause");
return 0;	
}
