#include <stdio.h>
#include <locale.h>

main()
{

    setlocale(LC_ALL, "portuguese");
     float baseMaior, baseMenor, altura;

        printf("Entre valor da base maior: \n");
        scanf("%f",&baseMaior);

        printf("Entre valor da base menor: \n");
        scanf("%f",&baseMenor);


        printf("Entre valor da altura: \n");
        scanf("%f",&altura);

        // Precisão: Duas casas apos a virgula
        printf("Área do Trapézio: %.2f \n",(((baseMaior + baseMenor)*altura)/2));

}
