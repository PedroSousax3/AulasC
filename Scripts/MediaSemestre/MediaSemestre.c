#include <stdio.h>

#define size(vetor) (sizeof((vetor)) / sizeof(int))

int main () {
    printf("Olá tudo bem, esse programa irá auxiliá-lo no calculo da sua média em um semestre.\n");
    
    //Coletar quantidade de avaliações
    int nrAvaliacoes = 0;
    printf("Quantas avaliações você teve neste semestre: ");
    scanf("%d", &nrAvaliacoes);
    //Coletas as notas com base na quantidade de avaliações no semetre.
    float notas[nrAvaliacoes];
    for (int i = 0; i < nrAvaliacoes; i++)
    {
        printf("Informe sua nota na %dº avaliação: ", (i + 1));
        scanf("%f", &notas[i]);
    }

    //Soma os valores do array de notas
    float somaDaNotas = 0;
    for (int i = 0; i < size(notas); i++)
        somaDaNotas += notas[i];

    printf("Sua média no semestre foi %f.\n", (somaDaNotas / size(notas)));
}