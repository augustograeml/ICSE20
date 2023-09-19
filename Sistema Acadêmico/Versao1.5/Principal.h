#ifndef _PRINCIPAL_H_
#define _PRINCIPAL_H_
#include "Aluno.h"
#include "Universidade.h"
#include "Professor.h"
#include "Disciplina.h"

class Principal
{
private:

    //Universidades
    Universidade UTFPR;
    Universidade Princeton;
    Universidade Cambridge;

    //Departamentos
    Departamento DAINF;
    Departamento DAELN;
    Departamento DAMAT;
    Departamento DAEST;
    Departamento FisicaPrinceton;
    Departamento MathCambridge;

    //Professores
    Professor Simao;
    Professor Einstein;
    Professor Newton;

    //Alunos
    Aluno Augusto;
    Aluno Antonio;
    Aluno Caique;

    //Disciplinas
    Disciplina TecProg_2023;
    Disciplina Calculo1_2023;
    Disciplina Estatistica1_2023;
    Disciplina EstruturaDados_2023;
    Disciplina LogicaComputacional_2023;

    int diaAtual;
    int mesAtual;
    int anoAtual;

public:
    Principal();
    void Executar();

    void Inicializa();
    void InicializaUniversidades();
    void InicializaDepartamentos();
    void InicializaProfessores();
    void InicializaAlunos();
    void InicializaDisciplinas();

    void CalcIdadeProfs();
    void UnivOndeProfsTrabalham();
    void DeptOndeProfsTrabalham();
    void ConhecPessoa();
    void ListeDiscDeptos();
    void ListeAlunosDisc();
};
#endif
