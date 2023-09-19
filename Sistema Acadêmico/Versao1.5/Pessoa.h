#ifndef _PESSOA_H_
#define _PESSOA_H_
#include <stdio.h>
#include "Universidade.h"
#include "Departamento.h"
class Pessoa
{
protected:
	int diaP;
	int mesP;
	int anoP;
	int idadeP;
	char nomeP[30];



public:
    Pessoa (int diaNa, int mesNa, int anoNa, char *nome);
    Pessoa();
    void Inicializa (int diaNa, int mesNa, int anoNa, char* nome = "");
    void calculaIdade(int diaAT, int mesAT, int anoAT);
    int informaIdade();




};
#endif //_PESSOA_H_
