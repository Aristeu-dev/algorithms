#include <stdio.h>

// Exercício 4. Escreva um programa que leia uma sequência de n inteiros e
// determine quantas sequências isoladas de números iguais existem. Exemplo:
// para n = 13.
// 3 4 4 1 2 5 5 5 2 2 6 2 2
// Há 4 grupos de 1 elemento (3, 1, 2 e 6), 3 grupos de 2 elementos (4, 2 e 2) e 1
// grupo de 3 elementos (5). O valor n deve ser um dado de entrada.

int main()
{
    int n = 0;
    printf("Informe a quantidade de valores: ");
    scanf("%d", &n);
    int values[n];
    int count = 1;
    for (int i = 0; i < n; i++)
    {
        printf("Informe o valor: ");
        scanf("%d", &values[i]);
        if (i > 0)
        {
            if ((values[i] == values[(i - 1)]))
            {
                count++;
            }
            else
            {
                printf("%s %d %s %d %s \n", "Há uma sequência de ", values[(i - 1)], " que repete ", count, " vezes");
                count = 1;
            }
        }
    }
    printf("%s %d %s %d %s \n", "Há uma sequência de ", values[(n - 1)], " que repete ", count, " vezes");
    return 0;
}
