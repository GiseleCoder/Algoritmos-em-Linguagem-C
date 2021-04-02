/*Informar se um número é par ou ímpar utilizando operador condicional ternário*/
#include <stdio.h>
#include <conio.h>
#define P "Par"
#define I "Impar"
int main(){
	int num = 0;
	printf("Digite um numero para saber se ele e par ou impar: \n\n");
	scanf("%d", &num);
	num= num%2;
	printf("\nO n%cmero %c %s.", 163, 130, num == 0? P:I);
getch();
system("pause");
return 0;	
}

