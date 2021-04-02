#include <stdio.h>
#include <conio.h>

int main(){
	int falta = 0;
	float media = 0;
	char conceito = 'S';
	printf("Digite a quantidade de faltas e a media do aluno:");
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
	 	
	printf("Conceito: %c", conceito); 	
	getch();
	system("pause");
	return 0;
}
