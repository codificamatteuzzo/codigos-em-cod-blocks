#include <stdio.h>
#include <locale.h>

main()
{

    setlocale(LC_ALL, "portuguese");
     float hora, minutos;

        printf("Entre com a(s) hora(s): \n");
        scanf("%f",&hora);

        printf("Entre o(s) minuto(s): \n");
        scanf("%f",&minutos);


        // Precisão: Duas casas apos a virgula
        printf("Hora para minutos: %.2f \n",(60*hora));
        printf("Hora + Minutos: %.2f \n",((60*hora)+minutos));
        printf("Total de Segundos: %.2f \n",(((60*hora)+minutos)*60));
}
