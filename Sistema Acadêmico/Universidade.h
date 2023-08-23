#ifndef _UNIVERSIDADE_H_
#define _UNIVERSIDADE_H_
#include "Departamento.h"

class Universidade
{
private:
    char nome[30];
    Departamento* pDpto; //Criação do objeto dpto da classe Departamento
public:
    //construtora
    Universidade (char* n = "");

    //Destrutora
    ~Universidade();

    void setNome (char* n);
    char* getNome();
    void setDepartamento (Departamento* pdep);
};
#endif // _UNIVERSIDADE_H_
