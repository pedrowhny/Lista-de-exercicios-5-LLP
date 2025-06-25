#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "pt.br.UTF-8");

    char str[200], codificada[200]; // Declaração de duas strings de tamanho 200
    int i;

    printf("Digite uma string: "); // Solicita ao usuário que digite uma string

    fgets(str, sizeof(str), stdin); // Lê a string do usuário
    str[strcspn(str, "\n")] = '\0'; // Remove o caractere de nova linha, se presente

    for (i = 0; str[i] != '\0'; i++) // Percorre a string até o final
    {
        char c = str[i]; // Armazena o caractere atual da string
        if (isalpha(c)) // Verifica se o caractere é uma letra
        {
            if (islower(c)) // Verifica se a letra é minúscula
            {
                codificada[i] = ((c - 'a' + 3) % 26) + 'a';
            }
            else // Se a letra for maiúscula
            {
                codificada[i] = ((c - 'A' + 3) % 26) + 'A';
            }
        }
        else // Se o caractere não for uma letra, mantém o mesmo caractere
        {
            codificada[i] = c; // Mantém o caractere original
        }
    }
    codificada[i] = '\0'; // Adiciona o caractere nulo ao final da string codificada

    printf("Nova string: %s\n", codificada);

    system("pause");

    return 0;
}