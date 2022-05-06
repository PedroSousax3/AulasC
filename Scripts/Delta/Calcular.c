#include <stdio.h>

int calcularDelta(int a, int b, int c) {
    return (b * b) - 4 * a * c;
}

int main () {
    printf("Calcular o delta");

    //Entrada de dados
    int a, b, c = 0;
    printf("Infome o coeficiente \"A\": ");
    scanf("%d", &a);
    printf("Infome o coeficiente \"B\": ");
    scanf("%d", &b);
    printf("Infome o coeficiente \"C\": ");
    scanf("%d", &c);

    //Processamento de dados Δ = b2 – 4ac
    int delta = calcularDelta(a, b, c);

    //Saída de dados
    printf("O valor de delta é %d", delta);
    return 0;

    //Compilação
    //mkdir ./bin/Delta & gcc ./Scripts/Delta/Calcular.c -o ./bin/Delta/Calcular.bin 
}