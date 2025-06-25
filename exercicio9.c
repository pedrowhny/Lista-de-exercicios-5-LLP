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

    char str[100];                 // Declaração de uma string de tamanho 100
    int i, j, len, palindromo = 1; // Variável para verificar se é palíndromo

    printf("Digite uma string: "); // Solicita ao usuário que digite uma string

    fgets(str, sizeof(str), stdin); // Lê a string do usuário
    str[strcspn(str, "\n")] = '\0'; // Remove o caractere de nova linha, se presente

    len = strlen(str); // Calcula o comprimento da string

    for (i = 0, j = len - 1; i < j; i++, j--) // Loop para comparar os caracteres da string
    {
        if (tolower(str[i]) != tolower(str[j])) // Compara os caracteres da string, ignorando maiúsculas e minúsculas
        {
            palindromo = 0;
            break;
        }
    }

    if (palindromo) // Verifica se a string é um palíndromo
        printf("A string é um palíndromo.\n");
    
    else // Se não for um palíndromo
        printf("A string não é um palíndromo.\n");

    system("pause");

    return 0;
}