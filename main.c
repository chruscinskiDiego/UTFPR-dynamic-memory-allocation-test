#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "empresa.h"

int main()
{
    int menu;
    int continuar;

    Data *vetData = NULL;
    Funcionario *f = NULL;

    int numFuncionarios = 0;
    int numDatas = 0;

    char nome[50];
    char cargo[50];
    int vinculo;

    int dia, mes, ano;

    liberaData(vetData);

    do{
            setbuf(stdin, NULL);
            printf("\n\tSelecione o menu que deseja acessar:\n\n");
            printf("\t1 -> Cadastro\t2 -> Remocao\n\t3 -> Imprimir\t4 -> Liberar\n\n");
            setbuf(stdin, NULL);
            scanf("%d", &menu);
            setbuf(stdin, NULL);
            if(menu == 1)
            {
                setbuf(stdin, NULL);

                printf("\nCADASTRO DE FUNCIONARIO:");

                printf("\n\nNOME:");
                scanf("%[^\n]s", nome);

                setbuf(stdin, NULL);

                printf("\nCARGO:");
                scanf("%[^\n]s", cargo);

                setbuf(stdin, NULL);

                printf("\nVINCULO:");
                scanf("%d", &vinculo);

                setbuf(stdin, NULL);

                printf("\nDATA: (Formato __/__/____)\n");
                scanf("%d/%d/%d", &dia, &mes, &ano);

                vetData = dataNova(vetData, dia, mes, ano, numDatas);

                f = novoFuncionario(f, dia, mes, ano, nome, cargo, vinculo, numFuncionarios);

                numFuncionarios++;
                numDatas++;

            }
            else if(menu == 2)
            {

                printf("\nQual o nome do funcionario que deseja excluir?");
                scanf("%[^\ns]", nome);
                excluiFuncionario(f, nome, numFuncionarios);
            }
            else if(menu == 3)
            {
                imprimeFuncionario(f, numFuncionarios);
            }
            else if(menu ==4)
            {
                liberaFuncionario(f);
                printf("\nLIMPEZA REALIZADA");
            }


        printf("\n\nDeseja continuar? (1 - SIM | 2 - NAO)");
        scanf("%d", &continuar);

    }while(continuar == 1);


    return 0;
}
