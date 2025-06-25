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

    char str[100], ch; // Declaração de uma string de tamanho 100 e um caractere para substituição
    int i, vogais = 0;

    printf("Digite uma string: "); // Solicita ao usuário que digite uma string

    fgets(str, sizeof(str), stdin); // Lê a string do usuário
    str[strcspn(str, "\n")] = '\0'; // Remove o caractere de nova linha, se presente

    printf("Digite um caractere para substituir as vogais: "); // Solicita ao usuário que digite um caractere para substituir as vogais
    scanf(" %c", &ch);

    for (i = 0; str[i] != '\0'; i++) // Percorre a string até o final
    {
        char c = tolower(str[i]); // Converte o caractere atual para minúsculo para facilitar a comparação
        
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') // Verifica se o caractere é uma vogal
        {
            str[i] = ch; // Substitui a vogal pelo caractere fornecido
        }
        else if (c == 'á' || c == 'é' || c == 'í' || c == 'ó' || c == 'ú') // Verifica se o caractere é uma vogal acentuada
        {
            vogais++;
            str[i] = ch;
        }
    }

    printf("Nova string: %s\n", str);
    printf("Número de vogais substituídas: %d\n", vogais);

    system("pause");

    return 0;
}