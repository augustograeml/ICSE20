#ifndef _UNIVERSIDADE_H_
#define _UNIVERSIDADE_H_
#include "Departamento.h"
#include <list>
using namespace std;

class Universidade
{
private:
    char nome[30];

    //criação de uma lista de departamentos para cada universidade
    list<Departamento*> LpDptos;

    /**o que é esse ctd?**/
    int ctd;

public:
    //construtora
    Universidade (char* n = "");

    //Destrutora
    ~Universidade();

    void setNome (char* n);
    char* getNome();
    void setDepartamento (Departamento* pdep);
    void imprimeDepatamentos();
};
#endif // _UNIVERSIDADE_H_
