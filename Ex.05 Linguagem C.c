/* Ex.05 Dada a distância em quilômetros e o total de litros de combustível
gasto por um automóvel, informe seu cosumo médio*/
#include <stdio.h>
#include <conio.h>

int main(){
	float KM = 0, TotLitros = 0, ConsMedio = 0;
	printf("Informe a dist%cncia em quil%cmentros e o total de litros gastos: ", 131, 147);
	scanf("%f %f", &KM, &TotLitros);
	
	ConsMedio = KM / TotLitros;
	
	printf("\nConsumo m%cdio: %.2f litros por quil%cmetro.", 130, ConsMedio, 147);
	
	getch();
	system("pause");
	return 0;
} 
