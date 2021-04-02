/*Programa Extra - número inteiro natural N, determinar o N-ézimo triangular*/
#include <stdio.h>
#include <conio.h>

int main(){
	int continua, i, num;
	do{
		printf("Digite um n%cmero natural: ", 163);
		scanf("%d", &num);
		int triangular = 0;
		for(i = 0; i <= num; i++){
		triangular += i;
		}
		printf ("O N-%czimo n%cmero triangular de %d %c %d.", 130, 163, num, 130, triangular);
		printf("\n\nDigite zero para sair ou qualquer tecla para continuar testando.");
		scanf("%d", &continua);
		system("cls");
	}while(continua != 0);
		getch();
		system("pause");
		return 0;
	}

	
