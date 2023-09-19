#include "Disciplina.h"
#include <stdio.h>
#include <string.h>
#include "ELAluno.h"
#include <iostream>
using namespace std;

Disciplina::Disciplina(int na, char* ac)
{
    pDeptoAssociado = NULL;
    pProx = NULL;
    pAnte = NULL;
    int cont_alunos = 0;
    numero_alunos = na;
    strcpy(area_conhecimento, ac);
}
Disciplina::~Disciplina()
{
    pDeptoAssociado = NULL;
    pProx = NULL;
    pAnte = NULL;
    //ElAluno* pAux;
    //pAux = pElAlunoPrim;
    //while(NULL != pElAlunoPrim)
}
void Disciplina::setId(int n)
{
   id = n;
}
int Disciplina::getId()
{
    return id;
}
void Disciplina::setNome(char* n)
{
    strcpy(nome, n);
}
char* Disciplina::getNome()
{
    return nome;
}

void Disciplina::setDepartamento(Departamento* pdpto)
{
    pDeptoAssociado = pdpto;
    pdpto->inclueDiscpilina(this);
}

Departamento* Disciplina::getDepartamento()
{
    return pDeptoAssociado;
}
void Disciplina::setProxDisciplina(Disciplina* pd)
{
    pProx = pd;
}
Disciplina* Disciplina::getProxDiscipilina()
{
    return pProx;
}

void Disciplina::setAnteDisciplina(Disciplina* pd)
{
    pAnte = pd;
}

Disciplina* Disciplina::getAnteDisciplina()
{
    return pAnte;
}
void Disciplina::incluaAluno(Aluno* pa)
{

    if((cont_alunos < numero_alunos) && (pa != NULL))
    {
        ElAluno* pAux = NULL;

        pAux = new ElAluno;
        pAux->setAluno(pa);

        if(pElAlunoPrim == NULL)
        {
            pElAlunoPrim = pAux;
            pElAlunoAtual = pAux;
        }
        else
        {
            pElAlunoAtual->pProx = pAux;
            pAux->pAnte = pElAlunoAtual;
            pElAlunoAtual = pAux;
        }
        cont_alunos++;
    }
    else if (cont_alunos >= numero_alunos)
    {
        cout<<"Aluno nao incluido. Turma Lotada!\n" << endl;
    }
    else
        cerr << "ERRO!" << endl;
}
void Disciplina::listeAlunos()
{
    ElAluno* pAux = NULL;
    pAux = pElAlunoPrim;

    if(pElAlunoPrim == NULL)
    {
        cerr << "ERRO! LISTA ESTÁ VAZIA" << endl;
    }
    else
    {
        while( pAux != NULL)
        {
            printf("Aluno %s matriculado na Disciplina %s \n", pAux->getNome(), nome);
            pAux = pAux->pProx;

        }
    }


}
void Disciplina::listeAlunos2 ( )
{
    ElAluno* pAux;
    pAux = pElAlunoAtual;

    while ( pAux != NULL )
    {
        printf (" Aluno %s matriculado na Disciplina %s \n", pAux->getNome(), nome);
        pAux = pAux->pAnte;
    }
}
