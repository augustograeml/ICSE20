#include "Principal.h"
#include "Pessoa.h"
#include "Universidade.h"
#include "Departamento.h"
Principal::Principal()
{
    //Inicializa as pessoas com as devidas informações
    Simao.Inicializa ( 3, 10, 1976, "Jean Simão");
    Einstein.Inicializa ( 14, 3, 1879, "Albert Einstein");
    Newton.Inicializa ( 4, 1, 1643, "Isaac Newton");

    //Inicializa as Universidades com o devido nome
    UTFPR.setNome("UTFPR");
    Princeton.setNome("PRINCETON");
    Cambridge.setNome("CAMBRIDGE");

    DAINF.setNome("DAINF");
    FisicaPrinceton.setNome("FisicaPrinceton");
    MathCambridge.setNome("MathCambridge");

    // Aqui os objetos UTFPR e Simao são associados.
    // Na verdade, UTFPR é associado ao Simão via uma passagem por referência do ‘endereço’ dela.
    Simao.setUnivFiliado(&UTFPR);
    Einstein.setUnivFiliado(&Princeton);
    Newton.setUnivFiliado(&Cambridge);

    Simao.setDepartamento(&DAINF);
    Einstein.setDepartamento(&FisicaPrinceton);
    Newton.setDepartamento(&MathCambridge);

    Executar ();
}
void Principal::Executar()
{
    Simao.calculaIdade( diaAtual, mesAtual, anoAtual);
    Einstein.calculaIdade (diaAtual, mesAtual, anoAtual);
    Newton.calculaIdade(diaAtual, mesAtual, anoAtual);
    Simao.OndeTrabalho();
    Einstein.OndeTrabalho();
    Newton.OndeTrabalho();
    Simao.QualDepartamentoTrabalho();
    Einstein.QualDepartamentoTrabalho();
    Newton.QualDepartamentoTrabalho();

}
