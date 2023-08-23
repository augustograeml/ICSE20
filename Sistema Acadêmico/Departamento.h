#ifndef _DEPARTAMENTO_H_
#define _DEPARTAMENTO_H_

class Departamento {

private:

    int id;
    char nome[100];

public:

    Departamento();
    ~Departamento();

    void setNome(char* n);
    char* getNome();

};
#endif //_DEPARTAMENTO_H_
