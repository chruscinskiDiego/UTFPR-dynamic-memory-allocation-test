#ifndef EMPRESA_H_INCLUDED
#define EMPRESA_H_INCLUDED

typedef struct funcionario Funcionario;
typedef struct data Data;
Funcionario *novoFuncionario(Funcionario *vet ,int dia, int mes, int ano, char nome[], char cargo[], int vinculo, int contador);
void imprimeFuncionario (Funcionario *vet, int contador);
void liberaFuncionario (Funcionario *vet);
void imprimeData(Data *dt, int contador);
Data *dataNova(Data *vet, int d, int m, int a, int contador);
void liberaData( Data *dt);
void excluiFuncionario(Funcionario *f, char nome[], int contador);

#endif // EMPRESA_H_INCLUDED
