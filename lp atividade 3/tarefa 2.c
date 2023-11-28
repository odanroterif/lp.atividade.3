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
    char students[5][999];
    int age[5];
    float plus;
    float note[5][3];
    float results[5];
    int i, j;
//--------------------------------
    for (i = 0; i < 5; i++)
    {
        printf("Digite seu nome: ");
        gets(students[i]);
        fflush(stdin);
        printf("\ndiga sua idade: ");
        scanf("%i", &age[i]);

        for (j = 0; j < 3; j++)
        {
            do
            {
                printf("\n%iº nota: ", j + 1);
                scanf("%f", &note[i][j]);
                system("cls || clear");
                if (note[i][j] < 0)
                {
                    system("cls || clear");
                    printf("ESSA NOTA NÃO É VALIDAO\n\n");
                }
            } while (note[i][j] < 0 && note[i][j] > 10);
            plus += note[i][j];
        }

        results[i] = plus / 3;
        plus = 0;
        fflush(stdin);
    }
    system("cls || clear");
    for (i = 0; i < 5; i++)
    {
        printf("\n\nAluno %i: %s", i + 1, students[i]);
        printf("\nidade: %i", age[i]);
        printf("\nnotas: ");
        for (j = 0; j < 3; j++)
        {
            printf("%.1f|", note[i][j]);
        }
        printf("\nmédia: %.1f ", results[i]);
        if (results[i] >= 7)
        {
            printf("\nALUNO APROVADO");
        }
        if (results[i] < 7 && results[i] >= 5)
        {
            printf("\nALUNO EM RECUPERAÇÃO");
        }
        if (results[i] < 5)
        {
            printf("\nALUNO REPROVADO");
        }
    }
    return 0;
}