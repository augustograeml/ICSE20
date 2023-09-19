#include <stdio.h>
#include <string.h>
#include "Aluno.h"

Aluno::Aluno():Pessoa()
{
    RA = NULL;
}
Aluno::~Aluno()
{

}
void Aluno::setRa(int ra)
{
    RA = ra;
}
int Aluno::getRa()
{
    return RA;
}

void Aluno::setNome(char* nome)
{
    strcpy(nomeP, nome);
}

char* Aluno::getNome()
{
    return nomeP;
}
