#include "Principal.h"
#include "Pessoa.h"
#include "Aluno.h"
#include "Universidade.h"
#include "Departamento.h"
#include <windows.h>

Principal::Principal()
{
    SYSTEMTIME st;
    GetSystemTime (&st);
    diaAtual = st.wDay;
    mesAtual = st.wMonth;
    anoAtual = st.wYear;

    Inicializa();
    Executar();
}
void Principal::Inicializa()
{
    InicializaUniversidades();
    InicializaDepartamentos();
    InicializaDisciplinas();
    InicializaProfessores();
    InicializaAlunos();

}

void Principal::InicializaUniversidades()
{
    //Inicializa as Universidades com o devido nome
    UTFPR.setNome("UTFPR");
    Princeton.setNome("PRINCETON");
    Cambridge.setNome("CAMBRIDGE");
}

void Principal::InicializaDepartamentos()
{
    DAINF.setNome("DAINF");
    DAELN.setNome("DAELN");
    DAMAT.setNome("DAMAT");
    DAEST.setNome("DAEST");
    FisicaPrinceton.setNome("FisicaPrinceton");
    MathCambridge.setNome("MathCambridge");

    UTFPR.setDepartamento(&DAINF);
    UTFPR.setDepartamento(&DAELN);
    UTFPR.setDepartamento(&DAMAT);
    UTFPR.setDepartamento(&DAEST);

}

void Principal::InicializaProfessores()
{
    Simao.Inicializa ( 3, 10, 1976, "Jean Simao");
    Einstein.Inicializa ( 14, 3, 1879, "Albert Einstein");
    Newton.Inicializa ( 4, 1, 1643, "Isaac Newton");

    Simao.setUnivFiliado(&UTFPR);
    Einstein.setUnivFiliado(&Princeton);
    Newton.setUnivFiliado(&Cambridge);

    Simao.setDepartamento(&DAINF);
    Einstein.setDepartamento(&FisicaPrinceton);
    Newton.setDepartamento(&MathCambridge);
}

void Principal::InicializaAlunos()
{
    Augusto.Inicializa ( 5, 10, 2005, "Augusto Graeml");
    Antonio.Inicializa ( 14, 3, 2005, "Antonio Neto");
    Caique.Inicializa ( 4, 1, 2005, "Caique Ferraz");

    Augusto.setRa(12234);
    Antonio.setRa(76584);
    Caique.setRa(98876);
}

void Principal::InicializaDisciplinas()
{
    Calculo1_2023.setNome("Calculo 1");
    TecProg_2023.setNome("Tecnicas de programacao");
    Estatistica1_2023.setNome("Estatistica 1");
    EstruturaDados_2023.setNome("Estrutura de Dados 1");
    LogicaComputacional_2023.setNome("Lógica");

    DAINF.inclueDiscpilina(&EstruturaDados_2023);
    DAINF.inclueDiscpilina(&LogicaComputacional_2023);
    DAELN.inclueDiscpilina(&TecProg_2023);
    DAMAT.inclueDiscpilina(&Calculo1_2023);
    DAEST.inclueDiscpilina(&Estatistica1_2023);

    Calculo1_2023.setDepartamento(&DAMAT);
    TecProg_2023.setDepartamento(&DAELN);
    EstruturaDados_2023.setDepartamento(&DAINF);
    Estatistica1_2023.setDepartamento(&DAEST);
    LogicaComputacional_2023.setDepartamento(&DAINF);

    TecProg_2023.incluaAluno(&Augusto);
    TecProg_2023.incluaAluno(&Antonio);
    TecProg_2023.incluaAluno(&Caique);


}
void Principal::CalcIdadeProfs()
{
    Simao.calculaIdade(diaAtual,mesAtual,anoAtual);
    Einstein.calculaIdade(diaAtual,mesAtual,anoAtual);
    Newton.calculaIdade(diaAtual,mesAtual,anoAtual);
    printf("\n");
}
void Principal::UnivOndeProfsTrabalham()
{
    Simao.OndeTrabalho();
    Einstein.OndeTrabalho();
    Newton.OndeTrabalho();
    printf("\n");

}
void Principal::DeptOndeProfsTrabalham()
{
    Simao.QualDepartamentoTrabalho();
    Einstein.QualDepartamentoTrabalho();
    Newton.QualDepartamentoTrabalho();
    printf("\n");
}
void Principal::ListeAlunosDisc()
{
    TecProg_2023.listeAlunos();
    printf("\n");
}

/*void Principal::CalcIdadeAlunos()
{
    Augusto.calculaIdade(diaAtual,mesAtual,anoAtual);
    Antonio.calculaIdade(diaAtual,mesAtual,anoAtual);
    Caique.calculaIdade(diaAtual,mesAtual,anoAtual);
    printf("\n");
}*/

void Principal::Executar()
{
    CalcIdadeProfs();
    UnivOndeProfsTrabalham();
    DeptOndeProfsTrabalham();
//    ListeDiscDeptos();
    //ListeAlunosDisc();

}
