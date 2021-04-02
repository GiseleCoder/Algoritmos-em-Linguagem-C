/*Ex. 13 - Cálculo de fatorial*/
#include <stdio.h>
#include <math.h>

int main(){
int Num, Fat, aux, continua = 0;
do{
system("cls");
printf("Digite um n%cmero inteiro, maior ou igual a zero e verifique o fatorial: ", 163);
scanf("%d", &Num);
aux = Num;
if (Num == 0)
Fat = 1;
else{
Fat = Num;
while(Num > 1){
Fat = Fat * (Num - 1);
Num = Num - 1;
};
}
printf("\nFatorial de %d %c: %d. \n\n", aux, 130, Fat);
printf("Digite zero para sair ou qualquer tecla para continuar verificando fatorial: \n\n");
scanf("%d", &continua);
}while(continua!=0);
getch();
system("pause");
return 0;
}
