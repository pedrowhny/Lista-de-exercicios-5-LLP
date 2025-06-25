#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

struct Pessoa
{
    char nome[100];
    int idade;
    char endereco[150];
};

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "pt.br.UTF-8");

    struct Pessoa p;

    printf("Digite o nome: ");            // Solicita ao usuário que digite o nome
    fgets(p.nome, sizeof(p.nome), stdin); // Lê o nome do usuário
    p.nome[strcspn(p.nome, "\n")] = '\0';

    printf("Digite a idade: "); // Solicita ao usuário que digite a idade
    scanf("%d", &p.idade);
    getchar();

    printf("Digite o endereço: ");
    fgets(p.endereco, sizeof(p.endereco), stdin);
    p.endereco[strcspn(p.endereco, "\n")] = '\0';

    printf("\nDados da pessoa:\n");       // Exibe os dados da pessoa
    printf("Nome: %s\n", p.nome);         // Exibe o nome da pessoa
    printf("Idade: %d\n", p.idade);       // Exibe a idade da pessoa
    printf("Endereço: %s\n", p.endereco); // Exibe o endereço da pessoa

    system("pause");

    return 0;
}