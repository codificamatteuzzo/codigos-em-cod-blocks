#include <stdio.h>
#include <locale.h>

main()
{

    setlocale(LC_ALL, "portuguese");
     int n1, n2, n3;

        printf("Entre com n1: \n");
        scanf("%d",&n1);


        printf("Entre com n2: \n");
        scanf("%d",&n2);

        printf("Entre com n3: \n");
        scanf("%d",&n3);

        printf("Média: %d \n", ((n1+n2+n3)/3));

}
