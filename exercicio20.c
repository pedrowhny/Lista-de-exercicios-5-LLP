#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int bhaskara(float a, float b, float c, float *r1, float *r2) // Função que calcula as raízes da equação do segundo grau
{
    if (a == 0) // Verifica se o coeficiente 'a' é zero
    {
        printf("Não é equação de segundo grau.\n");
        return -1;
    }

    float delta = b * b - 4 * a * c; // Cálculo do discriminante (delta)

    if (delta < 0)
    {
        return 0;
    }
    else if (delta == 0)
    {
        *r1 = -b / (2 * a);
        return 1;
    }
    else
    {
        *r1 = (-b + sqrt(delta)) / (2 * a);
        *r2 = (-b - sqrt(delta)) / (2 * a);
        return 2;
    }
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "pt.br.UTF-8");

    float a, b, c, raiz1, raiz2;
    int numRaizes;

    printf("Digite os coeficientes a, b e c: ");
    scanf("%f %f %f", &a, &b, &c);

    numRaizes = bhaskara(a, b, c, &raiz1, &raiz2); // Chama a função bhaskara para calcular as raízes

    if (numRaizes == 1) // Se houver uma raiz real
    {
        printf("Uma raiz real: %.2f\n", raiz1);
    }
    else if (numRaizes == 2) // Se houver duas raízes reais
    {
        printf("Duas raízes reais: %.2f e %.2f\n", raiz1, raiz2);
    }
    else if (numRaizes == 0) // Se não houver raízes reais
    {
        printf("Não existem raízes reais.\n");
    }

    system("pause");

    return 0;
}