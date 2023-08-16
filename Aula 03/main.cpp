#include <stdio.h>
#include "pessoa.h"
int main()
{
    Pessoa Einstein (14,3,1879, "Albert Einstein");
	Pessoa Newton (4,1,1643, "Isaac Newton");

	Einstein.calculaIdade(15,8,2023);
	Newton.calculaIdade(15,8,2023);

	Einstein.imprime();
	Newton.imprime();

	return 0;


}
