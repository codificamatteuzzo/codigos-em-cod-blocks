#include <stdio.h>
#include <locale.h>

main()
{

    setlocale(LC_ALL, "portuguese");
     int n;

        printf("Entre com número: \n");
        scanf("%d",&n);

        if(n%2==0){
            printf("O número %d é par \n",n);
        }else{
            printf("O número %d é ímpar \n",n);
        }



}

