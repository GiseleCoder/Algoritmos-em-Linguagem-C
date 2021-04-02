/*Ex 09. Cálculo das raízes reais*/
#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){
	float a, b, c, delta, raiz01, raiz02;
	int continua;
	
	do{
		a = 0;
		system("cls");
		while(a == 0){
			system("cls");
			printf("Digite um valor diferente de zero para o coeficiente a:\n");
			scanf("%f", &a);
		}
		
		printf("\nDigite um valor para o coeficiente b:\n");
		scanf("%f", &b);
	
		printf("\nDigite um valor para o coeficiente c:\n");
		scanf("%f", &c);
	
		delta = pow(b,2)-4*a*c;
	
		if (delta < 0)
		
		printf("N%co existem ra%czes reais para delta igual a zero.", 198, 161);
	
		else{
			raiz01 = (-b + sqrt(delta))/2*a;
			raiz02 = (-b - sqrt(delta))/2*a;
			printf("\n\nAs ra%czes reais para %.2f, %.2f e %.2f s%co: %.2f e %.2f", 161 , a, b, c, 198, raiz01, raiz02);
		}
		
		printf("\n\n\nDigite 0 para continuar verificando os conceitos dos alunos.\n");
		scanf("%d", &continua);
		
	}while(continua == 0);
	
	getch();
	system("pause");
	return 0;
}
