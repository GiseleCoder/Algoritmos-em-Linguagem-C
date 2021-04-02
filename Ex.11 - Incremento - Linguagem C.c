/*Programa 13 - Incremento*/
#include <stdio.h>
#include <math.h>
int main(){
	int X, Y;
	printf("X = 3, Y = 0. EQUACAO: Y = X * (X + 1) * X++: \n");
	X = 3;
	Y = 0;
	Y = X * (X + 1) * X++;
	printf("X: %d Y: %d \n", X, Y);
	Y = X = 0;
	printf("\n\nX = 5, Y = 3. EQUACAO: Y *= X + 1: \n");
	X = 5;
	Y = 3;
	Y *= X + 1;
	printf("X: %d Y: %d \n", X, Y);
	system("pause");
	return 0;
}
