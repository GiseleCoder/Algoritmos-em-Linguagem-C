/*Diretivas Macros*/
#include <stdio.h>
#include <conio.h>
#define quad(n) ((n)*(n))

int main(){
	int n, result;
	printf("Digite um n%cmero: ", 163);
	scanf("%d", &n);
	result = 100/quad(n);
	printf("Resultado %c: %d.", 130, result);
	
	getch();
	system("pause");
	return 0;
}

