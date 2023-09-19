#ifndef _LALUNO_H   _
#define _LALUNO_H_
#include "Aluno.h"

class ElAluno
{
private:
    Aluno* pAl;
public:
    ElAluno();
    ~ElAluno();
    ElAluno *pProx;
    ElAluno *pAnte;

    void setAluno(Aluno *pa);
    Aluno* getAluno();
    char* getNome();

};

#endif // _ELALUNO_H_
