#include <stdio.h>
#include <stdlib.h>

// Exercício 6. (Busca sequencial) Faça um programa que leia uma sequência de
// números positivos terminada com o número 0 e os armazene em um vetor.
// Depois disso, seu programa deve solicitar um número ao usuário e pesquisar se o
// número digitado ocorre no vetor. Seu programa deve implementar o algoritmo de
// busca sequencial.

int main()
{

    int M[20];
    int N[20];
    int m = 0;
    int n = 0;
    int i = 0;
    int j = 0;
    int equals = 1;
    int count = 0;

    printf("%s", "Informe a quantidade de itens para a primeria sequência: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("%s ", "Informe o valor (N): ");
        scanf("%d", &N[i]);
    }

    printf("\n Informe a quantidade de itens para a segunda sequência: ");
    scanf("%d", &m);

    if (n > m)
    {
        printf("%s \n", "O M tem que ser maior que o N!");
        return 0;
    }

    for (i = 0; i < m; i++)
    {
        printf("%s", "Informe o valor (M): ");
        scanf("%d", &M[i]);
    }

    for (i = 0; i < m - n + 1; i++)
    {

        for (j = 0; j < n; j++)
        {
            if (M[i + j] != N[j])
            {
                equals = 0;
            }
        }
        if (equals)
        {
            count++;
        }
    }

    printf("\n Resultado: %d", count);

    return 0;
}