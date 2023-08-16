#include <stdio.h>

class Pessoa
{
public:
	int diaP;
	int mesP;
	int anoP;
	int idadeP;
	char* nomeP;

	Pessoa (int diaNa, int mesNa, int anoNa, char *nome)
	{
        diaP = diaNa;
        mesP = mesNa;
        anoP = anoNa;
        idadeP = -1;
        nomeP = nome;
	}

	void calculaIdade(int diaAT, int mesAT, int anoAT)
    {
        idadeP = anoAT - anoP;

        if (mesP > mesAT)
        {
            idadeP--;
        }
        else
        {
            if(mesP == mesAT)
            {
                if (diaP > diaAT)
                {
                    idadeP--;
                }
            }
        }
    }

    int informaIdade()
    {
        return idadeP;
    }

    void imprime()
    {
        printf("%s teria %d anos de idade!\n", nomeP, idadeP);
    }
};



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
