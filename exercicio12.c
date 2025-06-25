#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

struct Aluno // Estrutura para armazenar os dados do aluno
{
    int matricula;
    char nome[100];
    float nota1, nota2, nota3;
};

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "pt.br.UTF-8");

    struct Aluno alunos[5]; // Declaração de um vetor de estruturas Aluno para armazenar os dados de 5 alunos
    int i, indice_maior = 0;
    float media, maior_media = 0;

    for (i = 0; i < 5; i++) // Loop para ler os dados de 5 alunos
    {
        printf("Aluno %d\n", i + 1);
        
        printf("Matrícula: ");
        scanf("%d", &alunos[i].matricula);
        getchar();

        printf("Nome: ");
        fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);
        alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0';
        
        printf("Nota 1: ");
        scanf("%f", &alunos[i].nota1);

        printf("Nota 2: ");
        scanf("%f", &alunos[i].nota2);

        printf("Nota 3: ");
        scanf("%f", &alunos[i].nota3);

        getchar();

        media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3; // Cálculo da média das notas do aluno
        if (media > maior_media)
        {
            maior_media = media;
            indice_maior = i;
        }
        printf("\n");
    }

    printf("Aluno com maior média:\n"); // Exibição dos dados do aluno com a maior média
    printf("Nome: %s\n", alunos[indice_maior].nome);
    printf("Nota 1: %.2f\n", alunos[indice_maior].nota1);
    printf("Nota 2: %.2f\n", alunos[indice_maior].nota2);
    printf("Nota 3: %.2f\n", alunos[indice_maior].nota3);

    system("pause");

    return 0;
}