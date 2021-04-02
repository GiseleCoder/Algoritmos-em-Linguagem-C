/*Ex.02 Recebe peso e altura e calcula o IMC(Indice de Massa Corporal)*/
#include <stdio.h>
#include <conio.h>
#include <math.h>
int main (){
	float peso = 0 , altura = 0, IMC = 0;
	
	printf("Digite peso e Altura: ");	
	scanf("%f %f", &peso, &altura);
	IMC = peso / pow(altura,2);
	
	printf("\nSeu indice de massa corporal %c: %.2f", 130, IMC);
	getch();
	system ("pause");
	return 0;
}

