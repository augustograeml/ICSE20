#ifndef _DEPARTAMENTO_H_
#define _DEPARTAMENTO_H_

class Universidade;
class Disciplina;

class Departamento {

private:

    char nome[100];
    Universidade* pUniv;

    //Ponteiros para a lista encadeada
    Disciplina* pDisciplinaPrimeira;
    Disciplina* pDisciplinaAtual;

public:

    Departamento();
    ~Departamento();

    void setNome(char* n);
    char* getNome();
    //relacionando departamento com a universidade
    void setUniv(Universidade *pu);
    Universidade* getUniversidade();

    //função para incluir a disciplina à lista e setar propriamente os ponteiros
    void inclueDiscpilina(Disciplina* pd);
    void listeDisciplina();
    void listeDisciplina2();

};
#endif //_DEPARTAMENTO_H_
