/*Ex.16 Quadrado de um n�mero natural � dado pela soma dos primeiros n�meros impares consecutivos*/
#include <stdio.h>
#include <conio.h>

int main(){
	
	int num, soma, continua;
	do{
		printf("Digite um n%cmero natural: ", 163);
		scanf("%d", &num);
		quad = 0;
		for (i = 1; i <= num; i++)
		if (i%2 != 0)
		quad += i;
		printf ("O quadrado do n�mero %d %c %d", num, 130, quad);
		printf("Digite zero para sair ou qualquer tecla para continuar: ");
		scanf("%d", &continua);
	}while(continua == 0);

	
}
