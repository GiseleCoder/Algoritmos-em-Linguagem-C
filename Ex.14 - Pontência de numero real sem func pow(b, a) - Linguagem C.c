/*Ex. 14 - Pontência de um número real sem utilizar função pow(b,a), com estrutura de repetição for*/
#include <stdio.h>
#include <conio.h>

int main(){
int continua, i, pot;
float real, result = 1;
do{
system("cls");
printf("Digite um n%cmero real e sua pot%cncia: ", 163, 136);
scanf("%f %d", &real, &pot);
for (i=pot; i> 0; i--)
result *= real;
/*X,n= x*x*x*x*...*/
printf("\nO resultado de %0.1f elevado a %d %c: %.1f.\n", real, pot, 130, result);
printf("\nDigite zero para continuar testando: ");
scanf("%d", &continua);
}while(continua == 0);
getch();
system("pause");
return 0;
}
