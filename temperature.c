#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    double randomTemperature, temperatures[50], biggerTemperaure = 0, yearBiggerTemperature, secundBiggerTemperaure = 0, secundYearBiggerTemperature, sumTemperatures;
    //simuling device of temperature
    for (int i = 0; i <= 50; i++)
    {
        temperatures[i] = randomTemperature = ((double)rand() * (60.0 - 0.0)) / (double)RAND_MAX + 0.0;

        // printf("%2.f %i \n", temperatures[i], i + 1971);
    }
    //start of algorithm
    for (int j = 0; j < 50; j++)

    {
        if (temperatures[j] > biggerTemperaure)
        {
            biggerTemperaure = temperatures[j];
            yearBiggerTemperature = j + 1971;
        }
        if (temperatures[j] > secundBiggerTemperaure && temperatures[j] < biggerTemperaure)
        {
            secundBiggerTemperaure = temperatures[j];
            secundYearBiggerTemperature = j + 1971;
        }
        sumTemperatures += temperatures[j];
    }
    printf("%s %.2f %s %.0f \n", "A maior temperatura foi: ", biggerTemperaure, " e ocorreu no ano: ", yearBiggerTemperature);
    printf("%s %.2f %s %.0f \n", "A segunda maior temperatura foi: ", secundBiggerTemperaure, " e ocorreu no ano: ", secundYearBiggerTemperature);
    printf("%s %.2f \n", "A média das temperaturas é: ", sumTemperatures / 50);

    return 0;
}
