//Comentário
#include <stdio.h> //Importa pacotes

int printPulandoLinha(int numero){
    printf("%d", numero);
    printf("\n");
}

// Função principal
// tipo retorno nome ()
int main()
{
    printf("Olá, Mundo!\n"); // Exibe texto

    int temperatura = 37;
    printPulandoLinha(temperatura);
 
    int outroValor = 66;
    printPulandoLinha(outroValor);

    int soma = temperatura + outroValor;
    printPulandoLinha(soma);
    
    
    return 0; // retorna 0 para finalizar a função
}

//f(x) = x+1
