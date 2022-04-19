#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Exercício 3. Escreva um programa que leia uma palavra do teclado e determine
// se é um palíndromo.
// Observação: Palíndromo é uma palavra, frase ou número que permanece igual
// quando lida de trás para diante.

int main()
{
    int MAX = 3;
    char word[MAX];
    char reverseWord[MAX];
    int isPalindrome = 1;

    printf("%s", "Informe a palavra: ");
    fgets(word, MAX + 1, stdin);

    for (int i = MAX; i >= 1; i--)
    {
        reverseWord[(MAX - i)] = word[i - 1];
    }
    for (int i = 0; i < MAX; i++)
    {

        if (word[i] != reverseWord[i])
        {
            isPalindrome = 0;
        }
    }

    if (isPalindrome)
    {
        printf("%s \n", "A palavra é um palíndromo!");
    }
    else
    {
        printf("%s \n", "A palavra não é um palíndromo!");
    }

    return 0;
}
