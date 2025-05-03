#include <stdio.h>
#include <locale.h>
#include<math.h>

main()
{

    setlocale(LC_ALL, "portuguese");

        float n1, n2;
        int escolha;

        printf("Entre com Número 1: \n");
        scanf("%f",&n1);

        printf("Entre com Número 2: \n");
        scanf("%f",&n2);

        printf("Escolha 1 media, 2 diferença, 3 Produto, 4 Media: \n");
        scanf("%d",&escolha);

    switch (escolha)
{
   case 1:
     printf("Média: %.2f \n",((n1+n2)/2));
   break;

   case 2:
     printf("Diferença: %.2f \n",(n1-n2));
   break;

    case 3:
     printf("Produto: %.2f \n",(n1*n2));
   break;


    case 4:
     printf("Divisão: %.2f \n",(n1/n2));
   break;

   default:
     printf("Digite números de 1 a 4");
}
}

