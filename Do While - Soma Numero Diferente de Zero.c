/*Programa que lê números e soma até que o número digitado seja igual a zero*/
#include <stdio.h>
#include <conio.h>

int main(){
	int num, soma = 0;
	printf("Digite uma sequencia diferente de zero: \n");
	do{
	scanf("%d", &num);
	soma += num;
}while(num != 0);
	printf("Soma: %d \n", soma);
	system("pause");
	return 0;
}
