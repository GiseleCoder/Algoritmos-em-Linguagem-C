/*Programa que lê a quantidades de faltas e média dos alunos e informe o conceito final*/
#include <stdio.h>
#include <conio.h>

int main(){
	int falta, continua;
	float media;
	char conceito = 'S';
	
	do{
	system("cls");	
	printf("Digite a quantidade de faltas e a m%cdia do aluno:\n\n", 130);
	scanf("%d %f", &falta, &media);
	if(falta > 5){
		conceito = 'E';
	}
	else{
		 if(media >= 9){
		 	conceito = 'A';		 	
		 }
		 else{
		 	if(media >= 7.5){
		 		conceito = 'B';
		 	}
		    else{
		    	if(media >= 6){
		    		conceito = 'C';
		    	}
		    	else{
		    		conceito = 'D';
		    		}
				}
			}		    		
		 	
	 	}	
	printf("\nConceito: %c", conceito); 
	printf("\n\n\nDigite 0 para continuar verificando os conceitos dos alunos.\n");
	scanf("%d", &continua);
	}while(continua == 0);
	
	getch();
	system("pause");
	return 0;
}
