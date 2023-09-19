#ifndef _DISCIPLINA_H_
#define _DISICPLINA_H_
#include "Departamento.h"
class Aluno;
class ElAluno;

class Disciplina{
private:
    int id;
    char nome[150];
    char area_conhecimento[150];
    int numero_alunos;
    int cont_alunos;
    Departamento *pDeptoAssociado;
    Disciplina* pProx;
    Disciplina* pAnte;
    ElAluno *pElAlunoPrim;
    ElAluno *pElAlunoAtual;

public:
    Disciplina(int na = 45, char* ac ="");
    ~Disciplina();

    void setId(int n);
    int getId();

    void setNome(char*n = "");
    char* getNome();

    void setDepartamento(Departamento *pdpto);
    Departamento* getDepartamento();

    void setProxDisciplina(Disciplina* pd);
    Disciplina* getProxDiscipilina();

    void setAnteDisciplina(Disciplina* pd);
    Disciplina* getAnteDisciplina();

    void incluaAluno (Aluno* pa);
    void listeAlunos();
    void listeAlunos2();

};
#endif // _DISCIPLINA_H_
