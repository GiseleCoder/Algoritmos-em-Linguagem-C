/*Programa Atividade Extra - Conta Bancária - Digito Verificador*/
#include <stdio.h>
#include <math.h>

int main(){
	long int Conta, aux, Soma = 0; 
	int Dig, continua = 0;
	
	do{
	system("cls");
	printf("Digite o n%cmero de sua conta banc%cria: ", 163, 160);
	scanf("%d", &Conta);
	aux = Conta;
		while(Conta > 0){
		Soma += Conta % 10;
		Conta /= 10;
		};
		Dig = Soma % 10;
	printf("\nO n%cmero da sua conta %c %ld-%d.\n\n", 163, 130, aux, Dig);
	printf("Digite zero para sair ou qualquer tecla para continuar verificando fatorial: \n\n");
	scanf("%d", &continua);
}while(continua!=0);
	getch();  
	system("pause");
	return 0;
}
