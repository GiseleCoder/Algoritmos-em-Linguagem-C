/*Ex. 17 - diretivas define macros: soma, max e abs*/
#include <stdio.h>
#include <conio.h> 
#include "macros.h"

int main(){
	int num1, num2, continua;
	do{	
	system("cls");
	printf("Digite dois n%cmeros interios: ", 163);
	scanf("%d %d", &num1, &num2);
	
	if (num1 == num2){
		printf("\nOs n%cmeros s%co iguais.\n ", 163, 198);
		printf("\nO valor absoluto de %d %c %d.\n", num1, 130, abs(num1));
	}
	else{
		printf("\nO maior n%cmero entre %d e %d %c %d.\n", 163, num1, num2, 130, max(num1,num2));
		printf("\nO valor absoluto de %d %c %d e o valor absoluto de %d %c %d.\n", num1, 130, abs(num1), num2, 130, abs(num2));
	}
	printf("\nA soma de %d e %d %c %d.", num1, num2, 130, soma(num1,num2));	
	printf("\n\nDigite zero para sair ou qualquer n%cmero para continuar testando: ", 163);
	scanf("%d", &continua);
	}while(continua != 0);

	system("pause");
	return 0;
}
