/* Dado um caracter, informe seu código 
ASCII em octal, decimal e hexadecimal*/

#include <stdio.h>
#include <conio.h>

int main(){
	char letra = '0';
	printf("Digite um caracter: ");
	scanf("%c", &letra);
	system("cls");
	
	printf("\nO caracter %c tem c%cdigo ASCII:\nEm octal= %o.\nEm decimal= %d.\nEm hexadecimal= %x.\n\n", letra, 162, letra, letra, letra);
	system("pause");
	return 0;
}
