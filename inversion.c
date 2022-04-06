#include <stdio.h>

int main()
{
    int x[10];
    int a[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Informe o valor: ");
        scanf("%d", &x[i]);
    }

    for (int i = 10; i >= 1; i--)
    {
        a[(10 - i)] = x[i - 1];
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d \n", a[i]);
    }

    return 0;
}
