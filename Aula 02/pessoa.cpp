#include <stdio.h>

class Pessoa
{
private:
	int diaP;
	int mesP;
	int anoP;
	int idadeP;
	const char nomeP[30];

public:

	Pessoa (int diaNa, int mesNa, int anoNa, const char nome[30])
	{
        diaP = diaNa;
        mesP = mesNa;
        anoP = anoNa;
        idadeP = -1;
        char* strcpy (nome[30], nomeP[30]);
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
};



int main()
{
    Pessoa Einstein (14,3,1879, "Albert Einstein");
	Pessoa Newton (4,1,1643, "Isaac Newton");

	Einstein.calculaIdade(15,8,2023);
	Newton.calculaIdade(15,8,2023);

	printf("A idade de Einstein seria %d\n", Einstein.informaIdade());
	printf("A idade de Newton seria %d\n", Newton.informaIdade());

	return 0;


}
