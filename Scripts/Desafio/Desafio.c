#include <stdio.h>

int main() {
    printf("Verificar se numero é par/ímpar\n");
    
    //Entrada de dados
    int numero = 0;
    printf("Informe um número: ");
    scanf("%d", &numero);

    //Processamento de dados
    int resultado = numero % 2;
    
    //Saída de dados
    printf("%d\n", resultado);
    return 0;

    //Compilação
    //mkdir ./bin/Desafio & gcc ./Scripts/Desafio/Desafio.c -o ./bin/Desafio/Desafio 
}