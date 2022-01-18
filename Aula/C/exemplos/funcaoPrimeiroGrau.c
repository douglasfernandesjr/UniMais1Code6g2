//Comentário
#include <stdio.h> //Importa pacotes


// Tipo uma funcao matematica
// f(x) = x+2
int funcaoX(int x)
{
    return x + 2;
}

// Função principal
// tipo retorno nome ()
int main()
{
    int num = 0;
    printf("Digite um numero!\n"); // Exibe texto
    scanf("%d", &num);

    int resposta = funcaoX(num);

    printf("O retorno da função é o numero: %d", resposta);
    return 0; // retorna 0 para finalizar a função
}

