#include <stdio.h>
#include <stdlib.h>
// Exercício 2. Escreva um programa que leia duas palavras do teclado e determine
// se a segunda é um anagrama da primeira. Uma palavra é um anagrama de outra
// se todas as letras de uma ocorrem na outra, em mesmo número, independente da
// posição. Exemplos: ROMA, MORA, ORAM, AMOR, RAMO, são anagramas entre si.
#define clear_buffer          \
    while (getchar() != '\n') \
        ;
#include <string.h>
int main()
{
    int MAX = 5;
    char firstWord[MAX];
    char secundWord[MAX];
    int isAnagram = 1;
    printf("%s", "Informe a primeira palavra: ");

    fgets(firstWord, MAX, stdin);
    clear_buffer;

    printf("%s", "Informe a segunda palavra: ");

    fgets(secundWord, MAX, stdin);

    for (int i = 0; i < MAX - 1; i++)
    {

        for (int j = 0; j < MAX - 1; j++)
        {
            if (firstWord[i] == secundWord[j])
            {
                // printf("%s %c %s \n", "A letra ", firstWord[i], " existe na segunda palavra");
                isAnagram++;
            }
        }
    }
    if (isAnagram == MAX)
    {
        printf("%s %s %s %s %s \n", "As palavras ", firstWord, " e", secundWord, " são anagramas");
    }
    return 0;
}
