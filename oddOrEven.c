/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void main()
{
    int number;
    printf("Insert a number:");
    scanf("%i", &number);
    if (number % 2 == 0)
    {
        printf("%s", "The number is even.");
    }
    else
        printf("%s", "The number is odd");
}