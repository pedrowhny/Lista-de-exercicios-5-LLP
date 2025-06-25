#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

struct Atleta
{
    char nome[100];
    char esporte[100];
    int idade;
    float altura;
};

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "pt.br.UTF-8");

    struct Atleta atletas[5];
    int i, mais_alto = 0, mais_velho = 0;

    for (i = 0; i < 5; i++) // Loop para ler os dados de 5 atletas
    {
        printf("Atleta %d\n", i + 1);
        printf("Nome: ");
        fgets(atletas[i].nome, sizeof(atletas[i].nome), stdin);
        atletas[i].nome[strcspn(atletas[i].nome, "\n")] = '\0';

        printf("Esporte: ");
        fgets(atletas[i].esporte, sizeof(atletas[i].esporte), stdin);
        atletas[i].esporte[strcspn(atletas[i].esporte, "\n")] = '\0';
        printf("Idade: ");
        scanf("%d", &atletas[i].idade);

        printf("Altura (em metros): ");
        scanf("%f", &atletas[i].altura);
        getchar();
        printf("\n");
    }

    for (i = 1; i < 5; i++) // Começa de 1 porque já inicializamos mais_alto e mais_velho com 0
    {
        if (atletas[i].altura > atletas[mais_alto].altura) // Verifica se o atleta atual é mais alto que o mais alto encontrado até agora
        {
            mais_alto = i;
        }
        if (atletas[i].idade > atletas[mais_velho].idade) // Verifica se o atleta atual é mais velho que o mais velho encontrado até agora
        {
            mais_velho = i;
        }
    }

    printf("Atleta mais alto: %s\n", atletas[mais_alto].nome);
    printf("Atleta mais velho: %s\n", atletas[mais_velho].nome);

    system("pause");

    return 0;
}