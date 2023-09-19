#ifndef _ALUNO_H_
#define _ALUNO_H_

#include "Pessoa.h"
class Departamento;

class Aluno : public Pessoa
{
private:

    int RA;

public:

    Aluno();
    ~Aluno();

    void setNome(char* nome);
    char* getNome();

    void setRa(int ra);
    int getRa();


};



#endif // _ALUNO_H_
