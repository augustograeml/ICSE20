#ifndef _PRINCIPAL_H_
#define _PRINCIPAL_H_
#include "Pessoa.h"
#include "Universidade.h"
class Principal
{
private:
    Pessoa Simao;
    Pessoa Einstein;
    Pessoa Newton;
// UTFPR é agregada ao(s) objeto(s) desta classe!!!
    Universidade UTFPR;
    Universidade Princeton;
    Universidade Cambridge;
    int diaAtual;
    int mesAtual;
    int anoAtual;
public:
    Principal();
    void Executar();
};
#endif
