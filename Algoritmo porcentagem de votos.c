/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void main()
{
        int white,spoilt,valid,total ;
    printf("Informe a quantidade de votos brancos:");
    scanf("%d",&white);
    
    printf("Informe a quantidade de votos nulos:");
    scanf("%d",&spoilt);
    
    printf("Informe a quantidade de votos validos: ");
    scanf("%d",&valid);
    
    total=white+spoilt+ valid;
    
    printf("%s" "%2d" "%s", "Porcentagem de votos brancos: ",((white * 100)/total),"% \n");
    printf("%s" "%2d" "%s", "Porcentagem de votos nulos: ",((spoilt * 100)/total),"% \n");
    printf("%s" "%2d" "%s", "Porcentagem de votos validos: ",((valid * 100)/total),"% \n");

  
}
