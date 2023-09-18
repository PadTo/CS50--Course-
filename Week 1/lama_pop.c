#include <stdio.h>
#include <math.h>

int main(void)
{
    int lamas;
    int flamas;
    int flamas_t;
    do
    {
        printf("How many lamas are there?: ");
        scanf("%i", &lamas);

        printf("How many lamas do you want to have?: ");
        scanf("%i", &flamas);
    } while (lamas > flamas);

    flamas_t = lamas;
    int years = 0;

    while (flamas_t < flamas)

    {
        flamas_t += floor(((float)lamas / 3) - ((float)lamas / 4));
        years++;
    }
    printf("Years: %i", years);
}