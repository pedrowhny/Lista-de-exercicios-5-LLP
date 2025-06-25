#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

enum Meses
{
    JANEIRO = 1,
    FEVEREIRO,
    MARCO,
    ABRIL,
    MAIO,
    JUNHO,
    JULHO,
    AGOSTO,
    SETEMBRO,
    OUTUBRO,
    NOVEMBRO,
    DEZEMBRO
};

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "pt.br.UTF-8");

    int mes; 

    printf("Digite um número de 1 a 12: "); // Solicita ao usuário que digite um número correspondente ao mês
    scanf("%d", &mes);

    switch (mes) // Verifica o número do mês digitado pelo usuário
    {
    case JANEIRO:
        printf("Janeiro - 31 dias\n");
        break;
    case FEVEREIRO:
        printf("Fevereiro - 28 ou 29 dias\n");
        break;
    case MARCO:
        printf("Março - 31 dias\n");
        break;
    case ABRIL:
        printf("Abril - 30 dias\n");
        break;
    case MAIO:
        printf("Maio - 31 dias\n");
        break;
    case JUNHO:
        printf("Junho - 30 dias\n");
        break;
    case JULHO:
        printf("Julho - 31 dias\n");
        break;
    case AGOSTO:
        printf("Agosto - 31 dias\n");
        break;
    case SETEMBRO:
        printf("Setembro - 30 dias\n");
        break;
    case OUTUBRO:
        printf("Outubro - 31 dias\n");
        break;
    case NOVEMBRO:
        printf("Novembro - 30 dias\n");
        break;
    case DEZEMBRO:
        printf("Dezembro - 31 dias\n");
        break;
    default:
        printf("Mês inválido.\n");
    }

    system("pause");

    return 0;
}