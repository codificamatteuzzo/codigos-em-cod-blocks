#include <stdio.h>
#include <locale.h>

main()
{

    setlocale(LC_ALL, "portuguese");
     float preco;

        printf("Entre com preço: \n");
        scanf("%f",&preco);
        // Precisão: Duas casas apos a virgula
        printf("Preço: %.2f \n", (preco * 0.9));

}
