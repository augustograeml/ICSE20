#include <string.h>
#include "Pessoa.h"
#include <iostream>
using namespace std;


	Pessoa::Pessoa (int diaNa, int mesNa, int anoNa, char *nome)
	{
        Inicializa(diaNa, mesNa, anoNa, nome);
	}
	Pessoa::Pessoa()
	{
        Inicializa(0,0,0);
	}

    void Pessoa::Inicializa( int diaNa, int mesNa, int anoNa, char* nome)
    {
        diaP = diaNa;
        mesP = mesNa;
        anoP = anoNa;
        idadeP = -1;
        strcpy(nomeP,nome);
        calculaIdade(16, 8, 2023);

    }
	void Pessoa::calculaIdade(int diaAT, int mesAT, int anoAT)
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
/*-------------------------------
FUNÇÃO QUE RETORNA A IDADE
    int Pessoa::informaIdade()
    {
        return idadeP;
    }
-------------------------------*/
/*    void Pessoa::imprime()
    {
        cout << nomeP << " teria " << idadeP << " anos de idade!\n";
    }
*/

    void Pessoa::setUnivFiliado (Universidade* pu)
    {
        pUnivFiliado = pu;
    }

    void Pessoa::OndeTrabalho()
    {
        cout << nomeP <<" trabalha para a "<< pUnivFiliado->getNome() <<endl;
    }
