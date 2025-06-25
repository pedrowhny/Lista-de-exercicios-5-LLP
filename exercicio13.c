#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

struct Data
{ // Estrutura para armazenar a data de nascimento
    int dia;
    int mes;
    int ano;
};

struct Pessoa
{ // Estrutura para armazenar os dados da pessoa
    char nome[100];
    struct Data nascimento;
};

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "pt.br.UTF-8");

    struct Pessoa pessoas[6];
    int i, mais_novo = 0, mais_velho = 0;

    for (i = 0; i < 6; i++) // Loop para ler os dados de 6 pessoas
    {
        printf("Pessoa %d\n", i + 1); // Exibe o número da pessoa
        printf("Nome: "); // Solicita o nome da pessoa
        fgets(pessoas[i].nome, sizeof(pessoas[i].nome), stdin);
        pessoas[i].nome[strcspn(pessoas[i].nome, "\n")] = '\0';

        printf("Data de nascimento (dia mes ano): "); // Solicita a data de nascimento
        scanf("%d %d %d", &pessoas[i].nascimento.dia, &pessoas[i].nascimento.mes, &pessoas[i].nascimento.ano);
        getchar();
        printf("\n");
    }

    for (i = 1; i < 6; i++) // Loop para comparar as datas de nascimento e encontrar a mais nova e a mais velha
    {
        struct Data nasc_atual = pessoas[i].nascimento;
        struct Data nasc_mais_velho = pessoas[mais_velho].nascimento;
        struct Data nasc_mais_novo = pessoas[mais_novo].nascimento;

        if (nasc_atual.ano < nasc_mais_velho.ano ||
            (nasc_atual.ano == nasc_mais_velho.ano && nasc_atual.mes < nasc_mais_velho.mes) ||
            (nasc_atual.ano == nasc_mais_velho.ano && nasc_atual.mes == nasc_mais_velho.mes && nasc_atual.dia < nasc_mais_velho.dia))
        {
            mais_velho = i;
        }

        if (nasc_atual.ano > nasc_mais_novo.ano ||
            (nasc_atual.ano == nasc_mais_novo.ano && nasc_atual.mes > nasc_mais_novo.mes) ||
            (nasc_atual.ano == nasc_mais_novo.ano && nasc_atual.mes == nasc_mais_novo.mes && nasc_atual.dia > nasc_mais_novo.dia))
        {
            mais_novo = i;
        }
    }

    printf("Pessoa mais velha: %s\n", pessoas[mais_velho].nome);
    printf("Pessoa mais nova: %s\n", pessoas[mais_novo].nome);

    system("pause");

    return 0;
}