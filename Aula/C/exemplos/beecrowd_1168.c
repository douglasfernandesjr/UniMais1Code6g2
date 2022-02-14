#include <stdio.h>
#include <string.h>

int ledPorNumero(char numero)
{
    switch (numero)
    {
    case '1':
        return 2;
    case '2':
        return 5;
    case '3':
        return 5;
    case '4':
        return 4;
    case '5':
        return 5;
    case '6':
        return 6;
    case '7':
        return 3;
    case '8':
        return 7;
    case '9':
        return 6;
    case '0':
        return 6;
    default:
        return 0;
    }
}
int contagem(char entrada[])
{
    int soma = 0;
    int i;
    int qtdChars = strlen(entrada);
    for (i = 0; i < qtdChars; i++)
    {
        soma += ledPorNumero(entrada[i]);
    }
    printf("%d leds\n", soma);
    return 0;
}

int main()
{
    int n;
    scanf("%d", &n);
    int i = 0;

    while (i < n)
    {
        char entrada[100];
        scanf("%s", entrada);
        contagem(entrada);
        i++;
    }

    return 0;
}