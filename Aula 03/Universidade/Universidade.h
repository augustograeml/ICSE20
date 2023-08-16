#ifndef _UNIVERSIDADE_H_
#define _UNIVERSIDADE_H_
class Universidade
{
private:
    char nome[30];

public:
    //construtora
    Universidade (char* n = "");

    //Destrutora
    ~Universidade();

    void setNome (char* n);
    char* getNome();
};
#endif // _UNIVERSIDADE_H_
