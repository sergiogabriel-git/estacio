#include <stdio.h>
#define PI 3.14159
#define E 2.71828

int square(int largura, int altura) {
    return(largura * altura);
}

float square_float(float largura, float altura) {
    return(largura * altura);
}

double square_double(double largura, double altura) {
    return(largura * altura);
}

int circle(int raio) {
    return(raio * PI);
}

float circle_float(float raio) {
    return(raio * PI);
}

double circle_double(double raio) {
    return(raio * PI);
}

int increment(int *num) {
    return ++(*num);
}

void main() {
    printf("%d\n", square(15,2));
    printf("%.2f\n", square_float(15.5,2.5));
    printf("%.5f\n", square_double(15.255,2.322));
    printf("%d\n", circle(15));
    printf("%.2f\n", circle_float(15.5));
    printf("%.5f\n", circle_double(15.255));

    typedef unsigned int uint; /* uint alias to unsigned int*/

    uint numero = 1000000;
    printf("%u\n", numero);
    printf("%d\n", increment(&numero));
}