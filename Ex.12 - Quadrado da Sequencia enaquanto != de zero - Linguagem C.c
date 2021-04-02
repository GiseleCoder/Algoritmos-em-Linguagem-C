/*Ex.12 - Quadrado da sequência de números digtados enquanto eles forem diferentes de zero*/
#include <stdio.h>
#include <math.h>

int main(){
int Num, Quad;
printf("Digite uma sequ%cncia de n%cmeros inteiros, diferentes de zero: ", 136, 163);
scanf("%d", &Num);
while(Num != 0){
Quad = pow(Num,2);
printf("\nQuadrado %d \n", Quad);
printf("\nPr%cximo n%cmero: ", 162, 163);
scanf("%.0f\
n", &Num);
};
getch();
system("pause");
return 0;
}
