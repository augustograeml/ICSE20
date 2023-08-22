#ifndef _PESSOA_H_
#define _PESSOA_H_
#include <stdio.h>
#include "Universidade.h"
class Pessoa
{
private:
	int diaP;
	int mesP;
	int anoP;
	int idadeP;
	char nomeP[30];

	Universidade* pUnivFiliado;
	Departamento* pDptoFiliado;

public:
    Pessoa (int diaNa, int mesNa, int anoNa, char *nome);
    Pessoa();
    void Inicializa (int diaNa, int mesNa, int anoNa, char* nome = "");
    void calculaIdade(int diaAT, int mesAT, int anoAT);
    int informaIdade();
    //void imprime();

    void setUnivFiliado(Universidade* pu);
    void OndeTrabalho();
    void setDepartamento (Departamento* pdptamento);
    void QualDepartamentoTrabalho();


};
#endif //_PESSOA_H_
