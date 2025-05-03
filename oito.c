#include <stdio.h>
#include <locale.h>
#include<math.h>

main()
{

    setlocale(LC_ALL, "portuguese");

        float n1, n2;
        char escolha;

        printf("Entre com Número 1: \n");
        scanf("%f",&n1);

        printf("Entre com Número 2: \n");
        scanf("%f",&n2);

        printf("Escolha a. primeiro elevado ao segundo b. raiz quadrada de cada um c. raiz cúbica dos números: \n");
        scanf(" %c",&escolha);

    switch (escolha)
{
   case 'a':
     printf("a. %.2f \n",(pow(n1,n2)));
   break;

   case 'b':
     printf("b. Raiz do número 1: %.2f , Raiz do número 2: %.2f \n",sqrt(n1),sqrt(n2));
   break;

    case 'c':
     printf("c. Raiz cúbica dos número 1: %.2f , Raiz cúbica do número 2: %.2f \n",pow(n1, 1.0/3.0),pow(n2,1.0/3.0));
   break;

   default:
     printf("ERRO! Prog. finalizado! opção inválida! ");
     break;
}
}

