/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    double width, height, length, result;
    printf("Informe a altura:");
    scanf("%lf",&height);
    
    printf("Informe a largura:");
    scanf("%lf",&width);
    
    printf("Informe o comprimento: ");
    scanf("%lf",&length);
    
    result=height*width*length;
    
    return printf("%lf", result);

   
}
