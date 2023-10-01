#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "empresa.h"

struct data
{
    int dia;
    int mes;
    int ano;
};

struct funcionario
{
    Data dataAdmissao;
    char nome[50];
    char cargo[50];
    int vinculo;
};

Funcionario *novoFuncionario(Funcionario *vet, int dia, int mes, int ano, char nome[], char cargo[], int vinculo, int contador)
{
    if(contador ==0)
    {
        vet = malloc(sizeof(Funcionario));
    }
    else
    {
        vet = realloc(vet, (contador+1) * sizeof(Funcionario));
    }

    vet[contador].dataAdmissao.dia = dia;
    vet[contador].dataAdmissao.mes = mes;
    vet[contador].dataAdmissao.ano = ano;
    strcpy(vet[contador].nome, nome);
    strcpy(vet[contador].cargo, cargo);
    vet[contador].vinculo = vinculo;

    return vet;
}

void imprimeFuncionario (Funcionario *vet, int contador)
{

    printf("\n\nFUNCIONARIOS CADASTRADOS NO SISTEMA:");


    for(int i = 0; i < contador; i++)
    {
        if(vet[i].vinculo == 0)
        {
            printf("\n\nID[%d]: NOME: %s | CARGO: %s | CONTRATADO(A) | DATA DE CADASTRO: %d/%d/%d", i+1 ,vet[i].nome, vet[i].cargo, vet[i].dataAdmissao.dia , vet[i].dataAdmissao.mes, vet[i].dataAdmissao.ano);
        }
        if(vet[i].vinculo == 1)
        {
            printf("\n\nID[%d]: NOME: %s | CARGO: %s | ESTAGIARIO(A) | DATA DE CADASTRO: %d/%d/%d", i+1 ,vet[i].nome, vet[i].cargo, vet[i].dataAdmissao.dia , vet[i].dataAdmissao.mes, vet[i].dataAdmissao.ano);
        }
        if(vet[i].vinculo == 2)
        {
            printf("\n\nID[%d]: NOME: %s | CARGO: %s | FREELANCER | DATA DE CADASTRO: %d/%d/%d", i+1 ,vet[i].nome, vet[i].cargo, vet[i].dataAdmissao.dia , vet[i].dataAdmissao.mes, vet[i].dataAdmissao.ano);
        }
    }

}


void liberaFuncionario (Funcionario *vet)
{
    free(vet);
}

Data *dataNova(Data *vet, int d, int m, int a, int contador)
{
    if(contador == 0)
    {
        vet = malloc(sizeof(Data));
    }
    else
    {
        vet = realloc(vet, (contador+1) * sizeof(Data));
    }

    vet->dia = d;
    vet->mes = m;
    vet->ano = a;

    return vet;
}


void imprimeData(Data *dt, int contador)
{
    for(int i = 0; i < contador; i++)
    {
        printf("\n%d/%d/%d", dt[i].dia,dt[i].mes,dt[i].ano);
    }
}

void liberaData( Data *dt)
{
    free(dt);
}

void excluiFuncionario(Funcionario *f, char nome[], int contador)
{
    for(int i = 0; i < contador; i++)
    {
        if(strcmp(f[i].nome, nome) == 0)
        {
            strcpy(f[i].nome, "");
            strcpy(f[i].cargo, "");
            f[i].vinculo = 0;
            f[i].dataAdmissao.dia = 0;
            f[i].dataAdmissao.mes = 0;
            f[i].dataAdmissao.ano = 0;

            printf("FUNCIONARIO EXCLUIDO!\n");
            return;
        }
    }

    printf("FUNCIONARIO NAO ENCONTRADO!\n");
}
