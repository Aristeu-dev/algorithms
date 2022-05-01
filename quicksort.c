#include <stdio.h>
#include <string.h>

int partition(int list[], int start, int end)
{
    int pivot = list[end];
    int i = start;
    for (int j = start; j < end; j++)
    {
        if (list[j] <= pivot)
        {

            int aux = list[i];
            list[i] = list[j];
            list[j] = aux;
            i++;
        }
    }
    int aux = list[i];
    list[i] = list[end];
    list[end] = aux;
    return i;
}

void quicksort(int list[], int start, int end)
{
    if (start < end)
    {
        int pivot = partition(list, start, end);
        quicksort(list, start, pivot - 1);
        quicksort(list, pivot + 1, end);
    }
}

int main()
{

    int list[7];
    int i = 0;
    while (i < 7)
    {
        printf("%s", "Informe o valor: ");
        scanf("%d", &list[i]);
        i++;
    }
    quicksort(list, 0, i);
    for (int k = 0; k < i; k++)
    {
        printf("posição %d valor %d \n", k, list[k]);
    }
}
