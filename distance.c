#include <stdio.h>
int main()
{

    double primeiroQuilometro = 0.0;
    //definir o segundo quilometro com o valor inicial diferente do primeiro quilometro
    //para satisfazer a condição do loop.
    double segundoQuilometro = 1.0;
    double espaco = 0.0;
    // definir a velocidade inicial com 20, respeitando o enunciado.
    double velocidade = 20.0;
    double tempo = 0.0;
    int parada = 0; // 0 para continuar, 1 para finalizar
    while (parada == !1)
    {

        printf("Digite o primeiro quilometro em ordem crescente: ");
        scanf("%lf", &primeiroQuilometro);
        printf("Digite o segundo quilometro em ordem crescente: ");
        scanf("%lf", &segundoQuilometro);
        if (primeiroQuilometro == segundoQuilometro)
        {
            parada = 1;
        }
        //segurança, caso o usuário informe fora de ordem cronológica
        if (primeiroQuilometro > segundoQuilometro)
        {
            espaco = primeiroQuilometro - segundoQuilometro;
        }
        espaco = segundoQuilometro - primeiroQuilometro;

        while (velocidade <= 80)
        {
            tempo = espaco / velocidade;
            if (tempo > 2)
            {
                printf("A distancia entre a cidade %.2f e a cidade %.2f a velocidade de %.2f Km/h durou %.1f horas\n",
                       primeiroQuilometro, segundoQuilometro, velocidade, tempo);
            }
            velocidade = velocidade + 10;
        }
        velocidade = 20;
    }
    printf("Finalizado! \n");
    return 0;
}