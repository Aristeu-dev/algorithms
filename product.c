#include <stdio.h>

int main()
{

    int i = 1;
    int sex;
    int answer;
    int yes = 0;
    int no = 0;
    int countWoman = 0;
    int yesWoman = 0, noMan = 0;
    int percentMan = 0;
    int percentWoman = 0;
    //1 to woman 0 to man
    //1 to yes 0 to no
    while (i <= 2000)
    {
        printf("Insira o seu gênero (1 para mulher ou 0 para homem):");
        scanf("%i", &sex);
        printf("Insira a sua resposta (1 para sim ou 0 para não):");
        scanf("%i", &answer);
        if (sex == 1)
        {

            //woman
            countWoman++;
            if (answer == 1)
            {
                yes++;
                yesWoman++;
            }
        }
        else
        {
            if (answer == 0)
            {
                noMan++;
            }
            else
            {
                yes++;
            }
        }

        i++;
    }

    if (noMan)
    {
        percentMan = ((noMan * 100) / (2000 - countWoman));
    }
    if (yesWoman)
    {
        percentWoman = ((yesWoman * 100) / countWoman);
    }

    printf("%s %i \n", "O número de respostas sim é: ", yes);
    printf("%s %i \n", "O número de respostas não é: ", 2000 - yes);
    printf("%s %i \n", "a porcentagem de pessoas do sexo feminino que responderam sim: ", percentWoman);
    printf("%s %i \n", "a porcentagem de pessoas do sexo masculino que responderam não: ", percentMan);
}