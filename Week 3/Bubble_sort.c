#include <stdio.h>

int main(void)
{
    int condition = 0;
    int j = 0;
    int store;
    const int n = 8;
    int numbers[] = {1, 0, 7, 5, 6, 2, 4, 3};

    for (int k = 0; k < n - 1; k++)
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (numbers[i] > numbers[i + 1])
            {
                store = numbers[i];
                numbers[i] = numbers[i + 1];
                numbers[i + 1] = store;
            }
        }
    }
    /* Check if the values are in ascending order*/
    while (numbers[j] < numbers[j + 1])
    {
        if (numbers[j] < numbers[j + 1])
        {
            condition = 1;
        }
        else
        {
            condition = 0;
        }

        j++;
    }

    if (condition == 1)
    {
        printf("Numbers are in ascending order!");
        return 0;
    }
    else
    {
        printf("Numbers aren't in ascending order!");
        return 1;
    }
}
