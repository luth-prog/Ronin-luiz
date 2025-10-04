#include <stdio.h>

#define pi 3.14159

int main(){

    float raio, area;

    printf("Digite o valor do raio:");
    scanf("%f", &raio);
    area = pi * (raio * raio);
    printf("A area do circulo de raio %.2f eh %.2f", raio, area);

    return 0;
}