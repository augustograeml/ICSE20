#include"ElAluno.h"
#include <stdio.h>

ElAluno::ElAluno()
{
    pAl = NULL;
    pProx = NULL;
    pAnte = NULL;

}
ElAluno::~ElAluno()
{
    pAl = NULL;
}
void ElAluno::setAluno(Aluno *pa)
{
    pAl = pa;
}
Aluno* ElAluno::getAluno()
{
    return pAl;
}

char* ElAluno::getNome()
{
   return pAl->getNome();
}
