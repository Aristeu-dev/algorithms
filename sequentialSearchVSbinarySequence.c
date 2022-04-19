#include <stdio.h>

// Exercício 6. (Busca sequencial) Faça um programa que leia uma sequência de
// números positivos terminada com o número 0 e os armazene em um vetor.
// Depois disso, seu programa deve solicitar um número ao usuário e pesquisar se o
// número digitado ocorre no vetor. Seu programa deve implementar o algoritmo de
// busca sequencial.

#include <string.h>

int interactionsSequentialSearch(int list[], int find, int i)
{
    int j = 0;
    int interactions = 0;
    while (j <= i)
    {
        if (list[j] == find)
        {
            j = i;
            interactions++;
        }
        else
        {
            interactions++;
        }
        j++;
    }
    return interactions;
}

int interactionsBinarySearch(int list[], int find, int i)
{
    //ordena o vetor
    int interactions = 0;
    int aux;
    for (int s = 0; s <= i; s++)
    {
        for (int j = 0; j < i; j++)
        {
            if (list[s] < list[j])
            {
                aux = list[s];
                list[s] = list[j];
                list[j] = aux;
            }
        }
    }
    //busca binária
    int left = 0;
    int right = i;
    while (left <= right)
    {
        int half = (left + right) / 2;
        if (list[half] == find)
        {
            interactions++;
        }
        if (list[half] < find)
        {
            interactions++;
            left = half + 1;
        }
        else
        {
            interactions++;
            right = half - 1;
        }
    }
    return interactions;
}
int main()
{

    int list[1000];
    int stop = 1;
    int i = 0;
    int find = 0;
    while (stop > 0)
    {
        printf("%s", "Informe o valor: ");
        scanf("%d", &list[i]);

        if (list[i] == 0)
        {
            stop = 0;
        }
        i++;
    }
    printf("%s", "Informe o valor de pesquisa: ");
    scanf("%d", &find);

    int interactionsSequential = interactionsSequentialSearch(list, find, i);
    printf("%s %d \n", "As interações na busca sequencial foram: ", interactionsSequential);

    int interactionsBinary = interactionsBinarySearch(list, find, i);
    printf("%s %d \n", "As interações na busca binária foram: ", interactionsBinary);

    return 0;
}
