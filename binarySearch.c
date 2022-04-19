#include <stdio.h>

// Exercício 7. (Busca binária) O programa deste exercício é essencialmente o
// mesmo que o anterior. Entretanto, neste exercício, você deve implementar o
// algoritmo de busca binária (portanto, é necessário que você ordene o seu vetor
// antes de fazer a busca).

#include <string.h>
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

    //ordena o vetor

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
            printf("%s %d %s %d \n", "Foi encontrado o valor ", list[half], " na posição ", half);
        }
        if (list[half] < find)
        {
            left = half + 1;
        }
        else
        {
            right = half - 1;
        }
    }

    // for (int k = 0; k <= i; k++)
    // {
    //     printf("%d \n", list[k]);
    // }

    return 0;
}
