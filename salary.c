/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void main()
{
    int gender;
    float initialSalary;
    printf("Enter initial salary: R$ ");
    scanf("%f", &initialSalary);
    printf("Enter number 1 for male.");
    printf("\nEnter number 2 for female.");
    printf("\nInsert a number: ");
    scanf("%i", &gender);

    if (gender == 1)
        printf("%s %.2f", "Seu novo salário será de R$", initialSalary * 1.09);
    else
        printf("%s %.2f", "Seu novo salário será de R$", initialSalary * 1.1);
}
