//versão 5.0.2.1570 do starUML
#include <stdio.h>
class Pessoa
{
private:
	int diaP;
	int mesP;
	int anoP;
	int idadeP;
	char nomeP[30];

public:
    Pessoa (int diaNa, int mesNa, int anoNa, char *nome);
    void calculaIdade(int diaAT, int mesAT, int anoAT);
    int informaIdade();
    void imprime();
};
