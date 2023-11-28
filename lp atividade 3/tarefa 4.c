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
    int number[5];
    int negativeANDimps[2] = {0, 0};
    int maxORmin[2] = {0, 999};
    int count[2] = {0, 0};
    float results[2];
    int i;
//--------------------------------
    for (i = 0; i < 5; i++)
    {
        printf("digite o %iº número: ", i + 1);
        scanf("%i", &number[i]);
        count[0] += number[i];
        if (number[i] % 2 == 0)
        {
            count[1] += number[i];
        }
        if (number[i] % 2 != 0)
        {
            negativeANDimps[0]++;
        }
        if (number[i] < 0)
        {
            negativeANDimps[1]++;
        }
        if (number[i] > maxORmin[0])
        {
            maxORmin[0] = number[i];
        }
        if (number[i] < maxORmin[1])
        {
            maxORmin[1] = number[i];
        }
        if (number[i] == maxORmin[0] && number[i] == maxORmin[1])
        {
            maxORmin[0] = number[i];
            maxORmin[1] = number[i];
        }
        system("cls || clear");
    }
    results[0] = count[0] / 5;
    results[1] = count[1] / 5;
    printf("quantidade de impares: %i", negativeANDimps[0]);
    printf("\nquantidade de negativos: %i", negativeANDimps[1]);
    printf("\nmaior número: %i", maxORmin[0]);
    printf("\nmenor número: %i", maxORmin[1]);
    printf("\nmédia de pares: %.1f", results[1]);
    printf("\nmédia geral: %.1f", results[0]);
    return 0;
}