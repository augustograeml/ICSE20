#include <string.h>
#include "Universidade.h"
class Departamento;

Universidade::Universidade(char* n)
{

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
    LpDptos.push_back(pdep);
}

void Universidade::imprimeDepatamentos()
{
/*    list<Departamento*>::iterador iterador;

    for(iterador = LpDptos.begin(); iterador = LpDptos.end(); iterador++)
    {
        cout<<(*iterador)->getNome()<<endl;
    }*/
}
