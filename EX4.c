
//---------------------------------------------------------------------------------------------------------
/*
* @4
* Desenvolva a função a qual recebe dois valores de inteiros e que faça a todas as operacoes de ‘Bitwise’ e devolva o maior resultado
* entre eles.
*/
//---------------------------------------------------------------------------------------------------------

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int calcular_maximum_bitwise(int v1, int v2) {

	int a = v1 & v2;
	
	if(v1 | v2 > a)a = v1 | v2;
	if(v1 ^ v2 > a)a = v1 ^ v2;
	if(~v1 > a)a = ~v1;
	if(~v2 > a)a = ~v2;
	
	if(v1 >> v2 > a)a = v1 >> v2;
	if(v1 << v2 > a)a = v1 << v2;
	if(v2 >> v1 > a)a = v2 >> v1;
	if(v2 << v1 > a)a = v2 << v1;
	
	//Obs. Nao sei se conpreendi de forma correta o que deveria ser feito no teste @4.
	
	return a;
	
	
	


}
int main() {
	int valor_1, valor_2, maior_valor;
	printf("Informe os valores.\n");
	scanf("%d %d", &valor_1, &valor_2);
	maior_valor = calcular_maximum_bitwise(valor_1, valor_2);
	
	printf("O maior valor e: %d .\n", maior_valor);
	
	return 0;
}