#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

float calcularMedia(float n1, float n2, float n3, char tipo) // Função para calcular a média
{
    if (tipo == 'A' || tipo == 'a') // Verifica se o tipo é Aritmética
    {
        return (n1 + n2 + n3) / 3;
    }
    else if (tipo == 'P' || tipo == 'p') // Verifica se o tipo é Ponderada
    {
        return (n1 * 5 + n2 * 3 + n3 * 2) / 10;
    }
    else // Se o tipo não for válido
    {
        return -1; // Retorna -1 para indicar erro
    }
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "pt.br.UTF-8");

    float nota1, nota2, nota3, media;
    char letra;

    printf("Digite as três notas do aluno:\n");
    scanf("%f %f %f", &nota1, &nota2, &nota3);
    getchar();

    printf("Digite o tipo de média (A para aritmética, P para ponderada): ");
    scanf("%c", &letra);

    media = calcularMedia(nota1, nota2, nota3, letra); // Chama a função para calcular a média

    if (media == -1)
    {
        printf("Tipo de média inválido.\n"); // Informa que o tipo de média é inválido
    }
    else
    {
        printf("Média calculada: %.2f\n", media); // Exibe a média calculada
    }

    system("pause");

    return 0;
}