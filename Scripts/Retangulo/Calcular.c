#include <stdio.h>

float calcularArea(float largura, float altura)  {
    //area = largura * altura
    return largura * altura;
}

float calcularPerimetro(float largura, float altura)  {
    //perimetro = (largura * 2) + (altura * 2)
    return (largura * 2) + (altura * 2);
}

int main () {
    printf("Calcular a área de um retângulo\n");
    
    //Entrada de dados
    float largura, altura, area, perimetro = 0;
    printf("Informe a largura do retângulo: ");
    scanf("%f", &largura);
    printf("Informe a altura do retângulo: ");
    scanf("%f", &altura);

    //Processamento de dados
    area = calcularArea(largura, altura);
    perimetro = calcularPerimetro(largura, altura);

    //Saída de dados
    printf("A área do retângulo é %f, e o perímetro é %f\n", area, perimetro);
    return 0;

    //Compilação
    //mkdir ./bin/Retangulo & gcc ./Scripts/Retangulo/Calcular.c -o ./bin/Retangulo/Calcular
}