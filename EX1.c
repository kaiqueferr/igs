//-------------------------------------------------------------------------------------------------------
/*
* @1
* Desenvolver a função: ‘maior_valor’; que recebe quatro valores do tipo inteiro e retorna o maior valor.
*
*/
//-------------------------------------------------------------------------------------------------------

#include <stdio.h>

int maior_valor(int v1, int v2, int v3, int v4){
	int a = v1;
	if(v2 > a)a = v2;
	if(v3 > a)a = v3;
	if(v4 > a)a = v4;
	return a;
}

int main() {
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	int valor = maior_valor(a, b, c, d);
	printf("%d", valor);
	return 0;
}