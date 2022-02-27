#include <stdio.h>

int main () {
    printf("Calcular a área circunferência\n");

    //Entrada de dados
    float raio = 0;
    float pi = 3.1415926535;
    printf("Informe a o raio da circunferência: ");
    scanf("%f", &raio);

    //Processamento = area = pi * raio²
    float area = pi * (raio * raio);

    //Saída de dados
    printf("A área da circunferência é %f", area);
    return 0;
}