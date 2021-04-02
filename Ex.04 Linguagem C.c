/*Ex.04 Ler o raio de uma circunferência, 
calcurar o perímetro e imprimir na tela*/
#include <stdio.h>
#include <conio.h>
#include <math.h>
int main(){
	float perimetro = 0, area =0, raio = 0, PI = 3.14;
	printf("Informe o raio de uma circunfer%cncia: ", 136);
	scanf("%f", &raio);
	area = PI * pow(raio, 2);
	perimetro = 2 * PI * raio;
	printf("\n%crea: %.2f e per%cmetro: %.2f do raio %.2f ", 143, area, 161, perimetro, raio);
	getch();
	system("pause");
	return 0;
}
