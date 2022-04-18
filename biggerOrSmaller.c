#include <stdio.h>
#include <limits.h>
// Exercício 1. Faça um programa que leia um valor n e depois leia uma sequência
// de n números inteiros e os armazene em um vetor. Posteriormente, seu programa
// deve determinar o maior e o menor elemento do vetor.

int main()
{
    //leia um valor n
    int n = 0;
    int bigger = 0;
    int smaller = INT_MAX;

    printf("Informe a quantidade de valores: ");
    scanf("%d", &n);
    //leia uma sequência de n números inteiros
    int values[n];

    //armazene em um vetor
    for (int i = 0; i < n; i++)
    {
        printf("Informe o valor: ");
        scanf("%d", &values[i]);
        // printf("%s %d %s %d \n", "O valor na posição ", i, "é: ", values[i]);
    }

    for (int i = 0; i < n; i++)
    {
        //determinar o maior
        if (bigger < values[i])
        {
            bigger = values[i];
        }
        //menor elemento do vetor
        if (smaller > values[i])
        {
            smaller = values[i];
        }
    }
    printf("%s %d \n", "O maior valor é: ", bigger);
    printf("%s %d \n", "O menor valor é: ", smaller);

    return 0;
}
