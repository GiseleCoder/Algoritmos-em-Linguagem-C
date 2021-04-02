/*Funções*/
#include <stdio.h>
#include <conio.h>

void cumprimentos(char c){
	switch (c){
		case 'N': printf("\nBoa noite!");break;
		case 'T': printf("\nBoa tarde!"); break;
		default: printf("\nBom dia!");
	}
}
int main(){
	int horas;
	char c;
	printf("Digite horas: ");
	scanf("%d", &horas);
	if((horas > 4)&&(horas < 12))
		c='M';
	else{
		if((horas >= 12)&&(horas < 18))
		c='T';
		else{
			c='N';
		}
	}
	cumprimentos(c);
	return 0;
}
