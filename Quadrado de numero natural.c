/*Ex.16 Quadrado de um n�emro natural � dado pela soma dos primeiros n�meros impares consecutivos*/
#include <stdio.h>
#include <conio.h>
int main(){
	int num, quadrado, continua, i, impar;
	do{
		system("cls");
		printf("Digite um n%cmero natural: ", 163);
		scanf("%d", &num);
		quadrado = 0;
		impar = 1;
		
		for (i = 0; i < num; i++){
		quadrado+= impar;
		impar+= 2;
		}
		printf("\nO quadrado do n%cmero %d %c %d.", 163, num, 130, quadrado);
		printf("\n\nDigite zero para sair ou qualquer tecla para continuar: ");
		scanf("%d", &continua);
	}while(continua != 0);
	getch();
	system("pause");
	return 0;
}
