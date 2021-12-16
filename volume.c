/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void main()
{
    double width, height, length, result;
    printf("Insert a height:");
    scanf("%lf", &height);

    printf("Insert a width:");
    scanf("%lf", &width);

    printf("Insert a lenght: ");
    scanf("%lf", &length);

    result = height * width * length;

    printf("%lf", result);
}
