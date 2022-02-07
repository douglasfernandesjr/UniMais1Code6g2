#include <stdio.h>

double calcArea(double raio){
    double n = 3.14159;
    return n*raio*raio;
}

int main() {
    double a;
    scanf("%lf",&a);
    double resultado = calcArea(a);
    printf("A=%.4f\n",resultado);
    return 0;
}