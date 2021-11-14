/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    double water, sewer, result;
    printf("Informe o valor da tarifa de água:");
    scanf("%lf",&water);
    
    sewer = water * 0.80;
    
    result=water + sewer;
    
    return printf("%lf", result);

   
}
