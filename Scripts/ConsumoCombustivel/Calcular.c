#include <stdio.h>

int main () {
    //Entrada de dados
    float consumoMedio, kilometrosPercorridos, litrosGastos = 0;

    printf("Informe quantos quilómetros foi percorrido: ");
    scanf("%f", &kilometrosPercorridos);

    printf("Informe quantos litros de gasolina foram gastos: ");
    scanf("%f", &litrosGastos);

    //Processamento de dados
    printf("A média de consumo foi de %f \n", kilometrosPercorridos / litrosGastos);
    
    //Saída de dados
    return 0;

    //Compilação de arquivo
    //mkdir ./bin/ConsumoCombustivel & gcc ./Scripts/ConsumoCombustivel/Calcular.c -o ./bin/ConsumoCombustivel/Calcular.bin
}