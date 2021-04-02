/*Cegonha*/
#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){
	int continua = 0;
	float IMC = 0.0, H = 0.0, O= 0.0, A = 0.0, ganho = 0.0;/*A variável ganho vai receber a 
	diferença entre o peos da gestante antes da gravidez 
	e o peso da gestante durante o acompanhamento médico, 
	logo ela vai identificar o o ganho de peso da gestante 
	durante a evolução da gravidez*/
	do{
	printf("Informe a altura da gestante: \n");
	scanf("%f", &H);
	printf("Informe o peso antes da gravidez: \n");
	scanf("%f", &O);
	printf("Informe o peso atual da gestante: \n");
	scanf("%f", &A);
	
	IMC = O / pow(H, 2);
	ganho = A - O;
	
	if(IMC < 18.5){
		if(ganho < 12.5)
			printf("Ganho insufuciente");
		else
			if(ganho > 18)
				printf("Ganho exagerado");
			else
				printf("Ganho normal");
	}
	else
		if((IMC >= 18.5) && (IMC < 25)){
			if(ganho < 11)
				printf("Ganho insuficiente");
			else
				if(ganho > 16)
					printf("Ganho exagerado");
				else
					printf("Ganho normal");
		}
	else
		if((IMC >= 25) && (IMC < 30)){
			if(ganho < 7)
				printf("Ganho insuficiente");
			else
				if(ganho > 11.5)
					printf("Ganho exagerado");
				else
					printf("Ganho normal");
		}
	else	
		if(ganho < 5)
			printf("Ganho insuficiente");
		else
			if(ganho > 9)
				printf("Ganho exagerad0o");
		else
			printf("Ganho normal");	
	
			
	printf("\nO IMC antes da gravidez era: %.1f", IMC);
	printf("\nVoc%c ganhou %.3f na gravizdez.", 163, ganho);
	printf("\n\nDigite 1 para continuar e 0 para sair: ");
	scanf("%d", &continua);
	system("cls");
	}
	while(continua == 1);
	getch();
	system("pause");
	return 0;
}
