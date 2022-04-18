#include <stdio.h>

// Exercício 5. Dadas duas sequências de n e m elementos binários (0 ou 1), onde n
// ≤ m, faça um programa que verifique quantas vezes a primeira sequência ocorre
// na segunda. Ex: se a primeira for 101 e a segunda 1101010011010, então o
// resultado deve ser 3.
#define clear_buffer          \
    while (getchar() != '\n') \
        ;
#include <string.h>
int main()
{
    int MAX = 5;
    char first[MAX];
    char secund[MAX];
    int equals = 1;

    printf("%s", "Informe a primeira sequência: ");

    fgets(first, MAX, stdin);
    clear_buffer;

    printf("%s", "Informe a segunda sequência: ");

    fgets(secund, MAX, stdin);
    int count = 0;
    // printf("%ld %ld", strlen(first), strlen(secund));
    for (int i = 0; i < MAX; i++)
    {
        if (first[i] == secund[i])
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}
