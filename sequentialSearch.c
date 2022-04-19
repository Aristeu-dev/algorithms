#include <stdio.h>

// Exercício 6. (Busca sequencial) Faça um programa que leia uma sequência de
// números positivos terminada com o número 0 e os armazene em um vetor.
// Depois disso, seu programa deve solicitar um número ao usuário e pesquisar se o
// número digitado ocorre no vetor. Seu programa deve implementar o algoritmo de
// busca sequencial.

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
    int j = 0;
    while (j <= i)
    {
        if (list[j] == find)
        {
            printf("%s %d %s \n", "O valor ", find, " encontra-se no vetor!");
            j = i;
        }
        else
        {
            if (j == i)
            {
                printf("%s \n", "O valor não foi encontrado!");
            }
        }
        j++;
    }

    // printf("%d", count);
    return 0;
}
