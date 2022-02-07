#include <stdio.h>


int soma(a,b){
    return a+b;
}

int main() {
    int a;
    scanf("%d",&a);
    int b;
    scanf("%d",&b);
    
    int resultado = soma(a,b);

    printf("SOMA = %d\n",resultado);
    return 0;
}