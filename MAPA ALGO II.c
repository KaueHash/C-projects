#include <stdio.h>
#include <math.h>

int main (){
	int Dividendo, divisor, quociente, resto;
	printf("Insira o dividendo\n");
	scanf("%d", &Dividendo);
	printf("Insira o divisor\n");
	scanf("%d", &divisor);
	resto = Dividendo % divisor;
	printf("Resto eh %d\n",resto);
	quociente = (Dividendo - resto)/divisor;
	printf("Quociente eh %d\n", quociente);
	
}
