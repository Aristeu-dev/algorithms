/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void main()
{
    int white, spoilt, valid, total;
    printf("Insert the number of white votes:");
    scanf("%d", &white);

    printf("Insert the number of spoilt votes:");
    scanf("%d", &spoilt);

    printf("Insert the number of valid votes: ");
    scanf("%d", &valid);

    total = white + spoilt + valid;

    printf("%s"
           "%2d"
           "%s",
           "The percentage of white votes: ", ((white * 100) / total), "% \n");
    printf("%s"
           "%2d"
           "%s",
           "The percentage of spoilt votes : ", ((spoilt * 100) / total), "% \n");
    printf("%s"
           "%2d"
           "%s",
           "The percentage of valid votes : ", ((valid * 100) / total), "% \n");
}
