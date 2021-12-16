/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void main()
{
    double water, sewer, result;
    printf("Enter the value of the water tariff:");
    scanf("%lf", &water);

    sewer = water * 0.80;

    result = water + sewer;

    printf("%lf", result);
}
