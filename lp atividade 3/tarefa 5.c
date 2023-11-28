#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
//--------------------------------
int main()
{
    setlocale(LC_ALL, "portuguese");
//variable declaration------------
    float productprice[3] = {5.12, 800.50, 490.57};
    char productname[3][999] = {"miojo", "rx5600xt 6GB", "rx580 8GB"};
    int size[3] = {500, 500, 500};
    int option[2];
    int buys = 0;
//--------------------------------
    do
    {
        printf("1- ADICONAR AO CARRINHO UM PRODUTO");
        printf("\n2- ENCERRAR COMPRA");
        printf("\n\nescolha: ");
        scanf("%i", &option[0]);
        system("cls || clear");
        if (option[0] != 1 && option[0] != 2)
        {
            printf("OPÇÃO INVALIDA\n\n");
        }
        fflush(stdin);
        switch (option[0])
        {
        case 1:
            printf("1- %s por %.2f: %i sobrando", productname[1], productprice[1], size[0]);
            printf("\n2- %s por %.2f: %i sobrando", productname[0], productprice[0], size[1]);
            printf("\n3- %s por %.2f: %i sobrando", productname[2], productprice[2], size[2]);
            printf("\n\nescolha o produto: ");
            scanf("%i", &option[1]);
            if (option[1] == 1 || option[1] == 2 || option[1] == 3)
            {
                if (option[1] == 1)
                {
                    size[0]--;
                    buys++;
                }
                if (option[1] == 2)
                {
                    size[1]--;
                    buys++;
                }
                if (option[1] == 3)
                {
                    size[2]--;
                    buys++;
                }
            }

            system("cls || clear");
        case 2:
            break;
        }
    } while (option[0] != 2);
    printf("vendas feitas: %i", buys);
    return 0;
}