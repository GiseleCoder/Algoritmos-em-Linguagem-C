/*Ex.03 Leia a temperatura em Fahrenheit e devolva e correspondente em celsius. Formula: C=(F-32)* 5/9*/
#include <stdio.h>
#include <conio.h>


int main (){
float fahrenheit, celsius;
printf("Digite a temperatura em Fahrenheit: ");
scanf("%f", &fahrenheit);
celsius = (fahrenheit -32) * 5/9;

printf("\nA temperatura em graus Celsius %c: %.1f", 130, celsius);
getch();
system("pause");
return 0;
}
