#include "Departamento.h"
#include <string.h>
#include <stdio.h>
#include "Disciplina.h"

Departamento::Departamento()
{
    pDisciplinaAtual = NULL;
    pDisciplinaPrimeira = NULL;
}

Departamento::~Departamento()
{
    pDisciplinaAtual = NULL;
    pDisciplinaPrimeira = NULL;
}

void Departamento::setNome(char* n)
{
    strcpy (nome, n);
}

char* Departamento::getNome()
{
    return nome;
}

void Departamento::setUniv(Universidade* pu)
{
    pUniv = pu;
}

Universidade* Departamento::getUniversidade()
{
    return pUniv;
}

void Departamento::inclueDiscpilina(Disciplina* pd)
{
    if(pDisciplinaPrimeira == NULL)
    {
        pDisciplinaPrimeira = pd;
        pDisciplinaAtual = pd;
    }
    else
    {
        pDisciplinaAtual->setProxDisciplina(pd);
        pDisciplinaAtual = pd;
    }
}

void Departamento::listeDisciplina()
{
    Disciplina* pAux;
    pAux = pDisciplinaPrimeira;

    while(pAux != NULL)
    {
        printf("A disciplina %s pertence ao departamento %s \n", pAux->getNome(), nome);
        pAux = pAux->getProxDiscipilina();
    }
}
void Departamento::listeDisciplina2()
{
    Disciplina* pAux;
    pAux = pDisciplinaAtual;

    while(pAux != NULL)
    {
        printf("A disciplina %s pertence ao departamento %s \n", pAux->getNome(), nome);
        pAux = pAux->getAnteDisciplina();
    }
}
