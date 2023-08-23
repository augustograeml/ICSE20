#include <string.h>
#include "Universidade.h"

Universidade::Universidade(char* n)
{
    pDpto = NULL;
}

Universidade::~Universidade()
{
}

void Universidade::setNome(char* n)
{
    strcpy(nome, n);
}

char* Universidade::getNome()
{
    return nome;
}

void Universidade::setDepartamento(Departamento* pdep)
{
    //agregação via ponteiros
    pDpto = pdep;
}
