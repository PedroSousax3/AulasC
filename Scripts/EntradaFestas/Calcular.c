#include <stdio.h>

int main () {
    //Entrada de dados
    int qtdHomens, qtdMulheres = 0;

    printf("Informe a quantidade de ingresso vendidos para homens: ");
    scanf("%d", &qtdHomens);

    printf("Informe a quantidade de ingresso vendidos para mulheres: ");
    scanf("%d", &qtdMulheres);

    //Processamento de dados
    float totalArrecadado = (qtdHomens * 20) + (qtdMulheres * 15);

    //Saída de dados
    printf("O total arrecado com a venda de ingressos foi de %f \n", totalArrecadado);
    return 0;

    //Compilação de arquivo
    //mkdir ./bin/EntradaFestas & gcc ./Scripts/EntradaFestas/Calcular.c -o ./bin/EntradaFestas/Calcular
}