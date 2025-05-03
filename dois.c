
#include <stdio.h>
#include <locale.h>

main()
{

    setlocale(LC_ALL, "portuguese");
     int n1, n2;

        printf("Entre com n1: \n");
        scanf("%d",&n1);


        printf("Entre com n2: \n");
        scanf("%d",&n2);


        printf("Soma: %d \n", n1+n2);
        printf("Subtração: %d \n", n1-n2);
        printf("Divisão n1/n2: %d \n", n1/n2);
        printf("Multiplicação: %d \n", n1*n2);
}
