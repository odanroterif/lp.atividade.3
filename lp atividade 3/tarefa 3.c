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
    char name[999][999];
    int telephone[999];
    int count = 0;
    int option;
    int i;
//--------------------------------
    do
    {
        printf("1- CADASTRAR NOVO NÚMERO");
        printf("\n2- ENCERRAR PROGRAMA E MOSTRAR CADASTRADOS");
        printf("\n\nescolha: ");
        scanf("%i", &option);
        system("cls || clear");
        if (option != 1 && option != 2)
        {
            printf("OPÇÃO INVALIDA\n\n");
        }
        fflush(stdin);
        switch (option)
        {
        case 1:
            printf("digite o nome da pessoa: ");
            gets(name[count]);
            fflush(stdin);
            do
            {
                printf("\nDigite o telefone da pessoa: ");
                scanf("%i", &telephone[count]);
                if (telephone[count] < 1)
                {
                    system("cls || clear");
                    printf("TELEFONE INVALIDO");
                }
            } while (telephone[count] < 1);
            count++;
            system("cls || clear");
            break;
        case 2:
            break;
        }
    } while (option != 2);
    printf("NÚMEROS QUE VOCÊ CADASTROU");
    for (i = 0; i < count; i++)
    {
        printf("\n%i", telephone[i]);
    }
    return 0;
}
