/*-----------------------------
AUGUSTO CESAR GRAEML - AULA 01

Calcula a idade da struct pessoa recebendo como constante o dia de hoje e definindo a data de nascimento da pessoa a
ser calculada;
-----------------------------*/
#include <stdio.h>
#define DIA 9
#define MES 8
#define ANO 2023

typedef struct{

    int dia;
    int mes;
    int ano;
    int idade;

} Pessoa;

typedef struct{

    int dia;
    int mes;
    int ano;

} Data;

int CalculaIdade (Pessoa pessoa, Data data);

int main()
 {

Pessoa einstein;
Pessoa newton;
Data data_hoje;

einstein.dia = 14;
einstein.mes = 3;
einstein.ano = 1879;

newton.dia = 4;
newton.mes = 1;
newton.ano = 1643;

data_hoje.dia = DIA;
data_hoje.mes = MES;
data_hoje.ano = ANO;

newton.idade = CalculaIdade(newton , data_hoje);
einstein.idade = CalculaIdade (einstein , data_hoje);

printf("%d\n", newton.idade);
printf("%d\n", einstein.idade);

return 0;
}

int CalculaIdade (Pessoa pessoa, Data data)
{
    //calcular primeiro o ano e depois verificar os mes e o dia
    pessoa.idade = (data.ano - pessoa.ano);

    //se a pessoa nasceu em um mes maior ou igual ao mes atual &&
    if(pessoa.mes >= data.mes && pessoa.dia > data.dia)
        pessoa.idade --;

    return (pessoa.idade);
}
