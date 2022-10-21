#include <stdio.h>

int main()
{
    float temperatur[5];
    float temperaturTotal = 0;
    float medelVadert;

    printf("skriv 5 temperaturer");

    for (int i = 0; i< 5; i++)
    {
        scanf("%d" , &temperatur[i]);

        temperaturTotal = temperaturTotal + temperatur[i];

    }

    


    medelVadert = temperaturTotal /5;

    printf("%d", medelVadert);




    return 0;
}
