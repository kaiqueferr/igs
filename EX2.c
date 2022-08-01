//-------------------------------------------------------------------------------------------------------
/*
* @2
* Desenvolva a função que retorna o valor fatorial no parâmetro 'valor_ft'
*
*/
//-------------------------------------------------------------------------------------------------------

#include <stdio.h>

void calc_fatorial(int *valor_ft, int valor_n){
	int fator_temp = 1;
	int i;
	for(i = valor_n; i > 0; i--)
	{
		fator_temp *= i;
	}
	*valor_ft = fator_temp;
}

int main() {
	int v, vf = 0;
	int *pv = &v;
	scanf("%d", &v);
	calc_fatorial(&vf, *pv);  // Obs. Os argumentos foram mudados de 'calc_fatorial(vf, pv)' para calc_fatorial(&vf, *pv)
	printf("Valor fatorial de: [%d] é [%d]", v, vf);
	return 0;
}