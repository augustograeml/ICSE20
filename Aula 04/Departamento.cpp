#include "Departamento.h"
#include <string.h>

Departamento::Departamento()
{
    strcpy(nome, "");
}
Departamento::~Departamento()
{

}
void Departamento::setNome(char* n)
{
    strcpy (nome, n)
}
char* Departamento::getNome()
{
    return nome;
}
