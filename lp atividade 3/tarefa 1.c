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
    char name[5][999];
    int age[5];
    float wight[5];
    float hight[5];
    int minORmaxage[2] = {999, 0};
    float minORmax[4] = {999, 0, 0, 999};
    int i;
//--------------------------------
    for (i = 0; i < 5; i++)
    {
        printf("pessoa %i,diga seu nome: ", i + 1);
        gets(name[i]);
        fflush(stdin);
        printf("\ndiga sua idade: ");
        scanf("%i", &age[i]);
        if (age[i] > minORmaxage[1])
        {
            minORmaxage[1] = age[i];
        }
        if (age[i] < minORmaxage[0])
        {
            minORmaxage[0] = age[i];
        }
        if (age[i] == minORmax[0] && age[i] == minORmax[1])
        {
            minORmaxage[0] = age[i];
            minORmaxage[1] = age[i];
        }
        printf("\ndiga sua altura: ");
        scanf("%f", &hight[i]);
        if (hight[i] > minORmax[1])
        {
            minORmax[1] = hight[i];
        }
        if (hight[i] < minORmax[0])
        {
            minORmax[0] = hight[i];
        }
        if (hight[i] == minORmax[0] && hight[i] == minORmax[1])
        {
            minORmax[0] = hight[i];
            minORmax[1] = hight[i];
        }
        printf("\ndiga seu peso: ");
        scanf("%f", &wight[i]);
        if (wight[i] > minORmax[2])
        {
            minORmax[2] = wight[i];
        }
        if (wight[i] < minORmax[3])
        {
            minORmax[3] = wight[i];
        }
        if (hight[i] == minORmax[0] && hight[i] == minORmax[1])
        {
            minORmax[0] = hight[i];
            minORmax[1] = hight[i];
        }
        system("cls || clear");
    }
    printf("menor idade do grupo: %i", minORmaxage[0]);
    printf("\nmaior idade do grupo: %i", minORmaxage[1]);
    printf("\nmenor altura do grupo: %.2f", minORmax[0]);
    printf("\nmaior altura do grupo: %.2f", minORmax[1]);
    printf("\nmenor peso do grupo: %.2f", minORmax[3]);
    printf("\nmaior peso do grupo: %.2f", minORmax[2]);
    return 0;
}
